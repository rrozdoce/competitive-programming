#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,k;
    cin >> n >> m >> k;
    int nrs[m+1];
    for(int i = 0; i < m + 1; i++)
    {
        int x;
        cin >> x;
        nrs[i]= x;
    }
    int aux = nrs[m];
    int count = 0;
    for(int i = 0; i < m;i++)
    {
        if(__popcount(aux ^ nrs[i]) <= k) count++;
    }
    cout << count << "\n";
    return 0;
}