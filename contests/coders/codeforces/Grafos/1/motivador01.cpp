#include <bits/stdc++.h>
using namespace std;

struct Vertice
{
  int value;
  list<pair<int, int>> neighbors;
  Vertice(): value(0), neighbors() {}
};

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int v, a; cin >> v >> a;
  vector<Vertice> G(v+1);
  for(int i = 1; i <= v; i++)
  {
    G[i].value = i;
  }

  int x, y, p;
  for(int i = 0; i < a; i++)
  {
    cin >> x >> y >> p;
    G[x].neighbors.push_back({y, p});
  }

  int q; cin >> q;

  for(int i = 0; i < q; i++)
  {
    cin >> x >> y;
    bool encontrado = false;
    int _p = 0;
    for(auto& [j, p] : G[x].neighbors)
    {
      if(j == y){
        encontrado = true;
        _p = p;
        break;
      }
    }
    if (encontrado)
      cout << "Sim, por " << _p << " metros\n";
    else
      cout << "Não, são adjacentes" << "\n";
  }

  /*
  for(auto& i: G)
  {
    for(auto&[j, p]: G[i.value].neighbors)
    {
      cout << i.value << "-" << j << " = " << p << "\n";
    }
  }
  */
  return 0;
}