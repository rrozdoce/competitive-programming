#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<unsigned>> matriz;
    int N, M;
    cin >> N >> M;

    if (!(N >= 1 && M >= 1 && M <= 500))
    {
        return -1;
    }

    for (int i = 0; i < N; i++)
    {
        vector<unsigned> temp_vec;
        for (int j = 0; j < M; j++)
        {
            int valor;
            cin >> valor;
            temp_vec.push_back(valor);
        }
        matriz.push_back(temp_vec);
    }

    bool isEscada = true;
    int ultimoPivot = -1; // Coluna do último pivô encontrado

    for (int i = 0; i < N; i++)
    {
        int pivoCol = -1;

        // Encontra o pivô na linha atual (primeiro elemento não nulo)
        for (int j = 0; j < M; j++)
        {
            if (matriz[i][j] != 0)
            {
                pivoCol = j;
                break;
            }
        }

        // Se a linha é toda zero, verifica se as linhas abaixo também são zero
        if (pivoCol == -1)
        {
            for (int k = i + 1; k < N; k++)
            {
                for (int j = 0; j < M; j++)
                {
                    if (matriz[k][j] != 0)
                    {
                        isEscada = false; // Linha abaixo não é toda zero
                        break;
                    }
                }
                if (!isEscada)
                    break; // Sai do loop externo se encontrar uma violação
            }
            break; // Todas as linhas abaixo devem ser zero, então podemos parar
        }

        // Verifica se o pivô está à direita do último pivô
        if (pivoCol <= ultimoPivot)
        {
            isEscada = false;
            break;
        }

        // Atualiza a coluna do último pivô
        ultimoPivot = pivoCol;

        // Verifica se todos os elementos abaixo do pivô são zero
        for (int k = i + 1; k < N; k++)
        {
            for (int j = 0; j <= pivoCol; j++)
            {
                if (matriz[k][j] != 0)
                {
                    isEscada = false;
                    break;
                }
            }
            if (!isEscada)
                break; // Sai do loop externo se encontrar uma violação
        }

        // Se a matriz não é escada, podemos parar a verificação
        if (!isEscada)
            break;
    }

    if (isEscada)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}