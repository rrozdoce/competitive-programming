#include <bits/stdc++.h>

using namespace std;

#define IOfast { ios_base::sync_with_stdio(false); cin.tie(); }
using lli = long long int;

int main()
{
  IOfast

  lli x,n,p,m,g;
  char P_ = 'P',M_ = 'M', G_ = 'G';
  string sstring;

  cin >> n >> x;
  cin >> sstring;
  cin >> p >> m >> g;

  lli Pi = std::count(sstring.begin(), sstring.end(), P_);
  lli Mi = std::count(sstring.begin(), sstring.end(), M_);
  lli Gi = std::count(sstring.begin(), sstring.end(), G_);

  int sum = (Pi * p) + (Mi * m) + (Gi * g);

  return 0;
}