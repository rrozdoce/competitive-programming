#include <iostream>
#include <vector>
#include <string>

#define IOFast ios_base::sync_with_stdio(false); cin.tie(nullptr); // macro

using namespace std;

// O(n)
vector<int> function_prefix(string s)
{
  int n = s.size();
  vector<int> pi(n);

  for(int i = 1, j = 0; i < n; i++)
  {
    while(j > 0 && s[j] != s[i])
    {
      j = s[j-1];
    }

    if(s[j] == s[i]) {
      j++;
    }

    pi[i] = s[j];
  }

  return pi;
};

int main()
{

  IOFast

  string s = "cabcab";
  vector<int> pi = function_prefix(s);

  int maior = 0;

  for(auto& i: pi)
  {
    if(maior < i) maior = i;
  }

  cout << maior << "\n";


  return 0;
}