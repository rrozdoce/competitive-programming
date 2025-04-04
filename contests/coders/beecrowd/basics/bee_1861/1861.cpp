#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie();

  set<string> vitimas;
  map<string, int> assassinos;
  string ass, vit;
    
  while(cin >> ass >> vit)
  {
    assassinos[ass]++;
    vitimas.insert(vit);
  }

  cout << "HALL OF MURDERERS\n";

  for (auto& [nome, n_vi]: assassinos) {
    if(!vitimas.count(nome))
    {
      cout << nome << " " << n_vi << "\n";
    }
  }

  return 0;
}
