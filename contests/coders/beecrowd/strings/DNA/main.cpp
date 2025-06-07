#include <bits/stdc++.h>

// Problema Motivacional
// Numero e Titulo: k0001 - Fitas de DNA
// Resolvido: Kaio
// Aula: Suffix Array + LCP

using namespace std;

vector<int> build_suffix_array(string s) {
    int n = s.size();
    vector<pair<string, int>> suffixes;

    for (int i = 0; i < n; i++) {
        suffixes.emplace_back(s.substr(i), i); // sufixo + índice original
    }

    sort(suffixes.begin(), suffixes.end());

    vector<int> sa(n);
    for (int i = 0; i < n; i++) {
        sa[i] = suffixes[i].second;
    }
    return sa;
}

int conte_seq(string &s, string &sub, vector<int> &sa) {

    int n = s.size(), m = sub.size();

    auto cmp_lower = [&](int pos, const string &pat) {
        return s.compare(pos, m, pat) < 0;
    };

    auto cmp_upper = [&](const string &pat, int pos) {
        return s.compare(pos, m, pat) > 0;
    };

    auto low = lower_bound(sa.begin(), sa.end(), sub, cmp_lower);
    auto up = upper_bound(sa.begin(), sa.end(), sub, cmp_upper);

    return up - low;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    int n; cin >> n;
    cin.ignore();

    auto sa = build_suffix_array(s);

    for (int i = 0; i < n; i++) {

        string sub; cin >> sub;
        cout << conte_seq(s, sub, sa) << "\n";
    }

    return 0;
}

