#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  char operador;
  string nome;

  list <string> comportada;
  list <string> nao_comportada;
  while(cin >> operador >> nome) {
    if(operador == '+') comportada.push_back(nome);
    if(operador == '-') nao_comportada.push_back(nome);
  }

  int comportada_size = comportada.size();
  int nao_comportada_size = nao_comportada.size();

  comportada.merge(nao_comportada);
  comportada.sort();

  for(auto&i : comportada) {
    cout << i << '\n';
  }

  cout << "Se comportaram: " << comportada_size << " | Nao se comportaram: " << nao_comportada_size << '\n';
  return 0;
}