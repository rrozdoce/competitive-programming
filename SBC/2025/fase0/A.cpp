#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define mk_p make_pair
#define fir first
#define sec second

int main(int argc, char const *argv[])
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  cin.tie(NULL);

  string r[2][2];
  r[0][0] = "morto";
  r[0][1] = "vivo";
  r[1][0] = r[1][1] = "vivo e morto";
  int a,b;
  cin >> a >> b;
  cout << r[a][b] << "\n";

}

