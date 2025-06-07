#include <bits/stdc++.h>
using namespace std;

// Construção do suffix array em O(n log n)
vector<int> build_suffix_array(const string& s) {
    int n = s.size();
    const int ALPHABET = 256;

    vector<int> sa(n), classes(n), cnt(max(ALPHABET, n), 0);
    
    // Ordena os caracteres iniciais
    for (char c : s) cnt[c]++;
    for (int i = 1; i < ALPHABET; i++) cnt[i] += cnt[i - 1];
    for (int i = 0; i < n; i++) sa[--cnt[s[i]]] = i;

    classes[sa[0]] = 0;
    int classes_num = 1;
    for (int i = 1; i < n; i++) {
        if (s[sa[i]] != s[sa[i - 1]]) classes_num++;
        classes[sa[i]] = classes_num - 1;
    }

    vector<int> sa_new(n), classes_new(n);
    for (int h = 0; (1 << h) < n; ++h) {
        int len = 1 << h;

        // desloca para a esquerda
        for (int i = 0; i < n; i++) {
            sa_new[i] = sa[i] - len;
            if (sa_new[i] < 0) sa_new[i] += n;
        }

        // counting sort
        fill(cnt.begin(), cnt.begin() + classes_num, 0);
        for (int i = 0; i < n; i++) cnt[classes[sa_new[i]]]++;
        for (int i = 1; i < classes_num; i++) cnt[i] += cnt[i - 1];
        for (int i = n - 1; i >= 0; i--) sa[--cnt[classes[sa_new[i]]]] = sa_new[i];

        // atualiza classes
        classes_new[sa[0]] = 0;
        classes_num = 1;
        for (int i = 1; i < n; i++) {
            pair<int, int> cur = {classes[sa[i]], classes[(sa[i] + len) % n]};
            pair<int, int> prev = {classes[sa[i - 1]], classes[(sa[i - 1] + len) % n]};
            if (cur != prev) classes_num++;
            classes_new[sa[i]] = classes_num - 1;
        }
        classes.swap(classes_new);
    }

    return sa;
}

// Busca binária no suffix array: retorna verdadeiro se pattern estiver em s
bool contains(const string& s, const vector<int>& sa, const string& pattern) {
    int n = s.size(), m = pattern.size();
    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = (l + r) / 2;
        string suffix = s.substr(sa[mid], min(m, n - sa[mid]));
        if (suffix.compare(0, m, pattern) < 0) {
            l = mid + 1;
        } else if (suffix.compare(0, m, pattern) > 0) {
            r = mid - 1;
        } else {
            return true;  // pattern encontrado
        }
    }
    return false;
}

// Exemplo de uso
int main() {
    string s = "banana";
    s += '$'; // adiciona sentinela ao final (menor caractere)

    vector<int> sa = build_suffix_array(s);

    cout << "Suffix Array:\n";
    for (int i = 0; i < sa.size(); i++) {
        cout << i << ": " << s.substr(sa[i]) << '\n';
    }

    string pattern;
    cout << "\nDigite uma string para buscar: ";
    cin >> pattern;

    if (contains(s, sa, pattern)) {
        cout << "Pattern encontrado.\n";
    } else {
        cout << "Pattern NAO encontrado.\n";
    }

    return 0;
}
