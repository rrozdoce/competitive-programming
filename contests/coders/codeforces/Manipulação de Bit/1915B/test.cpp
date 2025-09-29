#include <bits/stdc++.h>

using namespace std;


// A = 0100 0001 = 65
// B = 0100 0010 = 66
// C = 0100 0011 = 67
// 0000 0010

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  //int a = 65, b = 66, c = 67, _ex = 63;
          // 67 - 65 = 2

  int res = ((65 & 3) == 3);
  cout << res << endl;

  return 0;
}