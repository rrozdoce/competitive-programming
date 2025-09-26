#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,a,b, c;
    cin >> x;
    while(cin >> a >> b >> c) cout << (a ^ b ^ c) << "\n";
    return 0;
}