#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while(cin >> n)
    {
        vector<int> A(n);
        for(int i = 0; i < n; i++) {
            cin >> A[i];
        }
        sort(A.begin(), A.end());

        int q;
        cin >> q;

        while(q--)
        {
          int valor_busca;
          cin >> valor_busca;

          long long contador = 0;
          for(int i = 0; i < n-3; i++) {
              if(A[i] > valor_busca && valor_busca >= 0) break;

              for(int j = i+1; j < n-2; j++) {
                  for(int k = j+1; k < n-1; k++) {
                    long long somaijk = (long long) A[i] + A[j] + A[k];
                    if(somaijk > valor_busca) break;

                    for(int l = k+1; l < n; l++) {
                      long long soma = somaijk + A[l];
                      if(soma > valor_busca) break;
                      if(soma == valor_busca)
                        contador++;
                    }
                  }
              }
          }

          cout << contador << endl;
        }
    }

    return 0;
}

