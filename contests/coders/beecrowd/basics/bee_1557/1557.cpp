#include <iostream>
#include <vector>
#include <iomanip> // Para formatação da saída

using namespace std;

/*
M(i+1)j = Mij * 2
Mi(j + 1) = Mij * 2
*/

int main()
{
    int N, M; // ordem da matriz

    while (cin >> N && N != 0)
    {

        if (N < 0 || N > 15)
        {
            continue; // Ignora valores fora do intervalo
        }

        vector<vector<int>> matriz(N, vector<int>(N)); // inicializa a matriz NxN
        int numero_base = 1;

        for (size_t i = 0; i < N; i++)
        {
            matriz[i][0] = numero_base; // primeiro elemento da linha

            // preencher a linha multiplicando por 2
            for (size_t j = 1; j < N; j++)
            {
                matriz[i][j] = matriz[i][j - 1] * 2;
            }

            numero_base *= 2; // atualiza o numero base para a proxima linha
        }

        // encontra o maior numero da matriz para determinar o tamanho do campo
        int maior_numero = matriz[N - 1][N - 1];
        int tamanho_campo = to_string(maior_numero).length();

        // imprime a matriz formatada
        for (size_t i = 0; i < N; i++)
        {
            for (size_t j = 0; j < N; j++)
            {
                cout << setw(tamanho_campo) << matriz[i][j];

                if (j < N - 1)
                {
                    cout << " "; // Adiciona espaço entre os numeros, exceto no ultimo
                }
            }

            cout << endl;
        }

        cout << endl; // Linha em branco após cada matriz
    }

    return 0;
}