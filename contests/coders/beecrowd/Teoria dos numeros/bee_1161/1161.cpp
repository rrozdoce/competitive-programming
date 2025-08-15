#include <iostream>

using namespace std;

// Função recursiva com programação dinâmica
long long fatorial_dinamico_recursivo(int n, long long *fatorial_array) {
  if (n == 0) {
    return 1;
  }
  if (fatorial_array[n] != 0) {
    return fatorial_array[n];
  }
  fatorial_array[n] = n * fatorial_dinamico_recursivo(n - 1, fatorial_array);
  return fatorial_array[n];
}

// Função iterativa com programação dinâmica
long long fatorial_dinamico_iterativo(int n) {
  long long fatorial_array[n + 1];
  fatorial_array[0] = 1;

  for (int i = 1; i <= n; i++) {
    fatorial_array[i] = i * fatorial_array[i - 1];
  }
  return fatorial_array[n];
}

long long fat(int n) {
    long long fact = 1;
    for(int i = 1; i<=n; i++) fact = fact  * i;
    return fact;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;

    while(cin >> x >> y)
    {
        long long _sum = fat(x)+fat(y);
        cout << _sum << "\n";
    }

    return 0;
}