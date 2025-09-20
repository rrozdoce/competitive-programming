#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;
    unsigned long long mask = 0;
    for (int i = N; i >= 0; --i) {
        int a; cin >> a;
        if (a) mask |= (1ULL << i);
    }

    long long steps = 0;
    while (mask != 1ULL) {
        if (mask & 1ULL) {
            // has constant term
            mask = (mask ^ (mask << 1)) ^ 1ULL;
        } else {
            // no constant term
            mask >>= 1;
        }
        ++steps;
    }

    cout << steps << '\n';
    return 0;
}
