#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<vector<unsigned>> matriz;
    int N, M;
    cin >> N;
    cin >> M;

    if (!(N >= 1 && (M >= 1 && M <= 500)))
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

    // verificar se é escada ou não
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(matriz[i][j] == 0) {
                for (int z = i + 1; z < N; z++)
                {
                    if(matriz[z][j] != 0)
                    {
                        int posicao_z,posicao_x;

                        // caso contrario
                        for (int x = j; x > 0; x--)
                        {
                            if(matriz[z][x] != 0)
                            {
                                posicao_z = z;
                                posicao_x = x;
                            }
                        }

                        // é primeiro elemento da matriz de linha n na posicao x, logo nao tem 0s na coluna a esquerda
                        if(posicao_x == 0)
                        {
                            cout << "N" << endl;
                            return 0;
                        }

                        for (int y = 0; y < M; y++)
                        {
                            if(matriz[y][posicao_x - 1] != 0)
                            {
                                cout << "N" << endl;
                                return 0;
                            }
                        }
                        
                    }
                }
                
            }

        }
        
    }

    cout << "S" << endl;
    

    return 0;
}