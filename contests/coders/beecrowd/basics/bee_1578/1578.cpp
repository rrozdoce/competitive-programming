#include <iostream>
#include <vector>

using namespace std;

/*
M linhas, cada uma com M inteiros aij (0 ≤ aij ≤ 2^32-1, 1 ≤ i,j ≤ M),

Exemplo entrada:

1 // N
2 // M
7 12
1024 1
*/

int main()
{
    int N; // número de matrizes cujos “quadrados” ainda não foram calculados
    int M;

    while (cin >> M)
    {
        cin >> M; // ordem da matriz MxM

        vector<vector<vector<int>>> conjunto_de_matrizes(N, vector<vector<int>>(M, vector<int>(M))); // matriz MxM

        /*
        os quais correspondem às células da matriz, de modo que valores consecutivos numa mesma linha são separados por um espaço em branco.
        */

        // entrada da matriz
        vector<vector<int>> matriz(M, vector<int>(M));
        for (size_t i = 0; i < M; i++)
        {
            for (size_t j = 0; j < M; j++)
            {
                cin >> matriz[i][j];
                //
            }
        }

        // saida
        int x = 4;
    }

    return 0;
}
