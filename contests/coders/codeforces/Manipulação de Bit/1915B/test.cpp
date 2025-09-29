#include <bits/stdc++.h>

using namespace std;

// A = 0100 0001 = 65 (66 - 1)
// B = 0100 0010 = 66 (67 - 1)
// C = 0100 0011 = 67
// A

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int a = 65, b = 66, c = 67, _ex = 63;
          // 67 - 65 = 2
  cout << (67 ^ 65) << endl;

  return 0;
}