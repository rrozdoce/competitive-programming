#include <bits/stdc++.h>

using namespace std;

// Suffix Array simples com sort: O(n log n * n)
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

int main() {
    string s = "banana";
    vector<int> sa = build_suffix_array(s);

    cout << "Suffix Array:\n";
    for (size_t i = 0; i < sa.size(); i++) {
        cout << sa[i] << ": " << s.substr(sa[i]) << '\n';
    }
    return 0;
}
