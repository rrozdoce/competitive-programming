#include <iostream>
#include <vector>
#include <algorithm> // Para usar sort
using namespace std;

int main()
{
    int N; // Número de linhas de entrada
    cin >> N;

    vector<int> linhas(N);

    // Ler os valores
    for (int i = 0; i < N; i++)
    {
        cin >> linhas[i];
    }

    // Separar pares e ímpares
    vector<int> pares;
    vector<int> impares;

    for (int i = 0; i < N; i++)
    {
        if (linhas[i] % 2 == 0)
        {
            pares.push_back(linhas[i]); // Adiciona pares ao vetor de pares
        }
        else
        {
            impares.push_back(linhas[i]); // Adiciona ímpares ao vetor de ímpares
        }
    }

    // Ordenar pares em ordem crescente
    sort(pares.begin(), pares.end());

    // Ordenar ímpares em ordem decrescente
    sort(impares.begin(), impares.end(), greater<int>());

    // Juntar pares e ímpares no vetor original
    int index = 0;
    for (int i = 0; i < pares.size(); i++)
    {
        linhas[index++] = pares[i];
    }
    for (int i = 0; i < impares.size(); i++)
    {
        linhas[index++] = impares[i];
    }

    // Exibe o resultado
    for (auto &v : linhas)
    {
        cout << v << endl;
    }

    return 0;
}