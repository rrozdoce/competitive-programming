#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  cin.tie(NULL);
  int C, G;
  while(cin >> C >> G)
  {
    if(C == 1)
    {
      cout << "vivo e morto" << endl;
    }

    else if(C == 0)
    {
      if(G == 0)
      {
        cout << "morto" << endl;
      }
      else if(G == 1)
      {
        cout << "vivo" << endl;
      }
    }
  }

  return 0;
}

