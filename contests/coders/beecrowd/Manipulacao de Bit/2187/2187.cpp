#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count=1;
    int v;

    while(cin >> v && v != 0)
    {
        int n50 = v/50; // 72/50 =~ 1
        v %= 50; // 72 % 50 = 22
        int n10 = v/10; // 22/10 =~2
        v %= 10; // 22 % 10 = 2
        int n5 = v/5; // 2/5 =~ 0
        v %= 5; // 2 % 5 = 2

        int n1=v;
        cout << "Teste " << count++ << "\n";
        cout << n50 << " " << n10 << " " << n5 << " " << n1 << "\n\n";
    }
    return 0;
}

