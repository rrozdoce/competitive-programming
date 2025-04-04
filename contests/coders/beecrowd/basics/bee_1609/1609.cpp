#include <iostream>
#include <unordered_set>
#include <map>
#include <vector>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); // ganha mais desempenho
  cin.tie();

  int numeroCasos, numeroOvelhas, ovelha;
  unordered_set<int> ovelhas;
  vector<int> respostas;

  cin >> numeroCasos;

  for (int i = 0; i < numeroCasos; i++) {
    ovelhas.clear();
    cin >> numeroOvelhas;
    for (int j = 0; j < numeroCasos; j++) {
      cin >> ovelha;
      ovelhas.insert(ovelha);
    }
    respostas.push_back(ovelhas.size());
  }

  for (int i = 0; i < (int) respostas.size(); i++) {
    cout << respostas.at(i) << endl;
  }
  return 0;
}
