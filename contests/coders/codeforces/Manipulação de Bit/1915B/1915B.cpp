#include <bits/stdc++.h>

using namespace std;

// A = 0100 0001 = 65 (66 - 1)
// B = 0100 0010 = 66 (67 - 1)
// C = 0100 0011 = 67

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    vector<vector<string>> test_case(t, vector<string>(t));

    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < t; j++)
        {
            cin >> test_case[i][j];
        }
    }
    return 0;
}