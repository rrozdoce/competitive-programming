#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int NC; // Quantidade de cidades
    cin >> NC;

    vector<vector<int>> cidades;

    for (int i = 0; i < NC; i++)
    {
        int N; // Quantidade de pessoas na cidade
        cin >> N;

        vector<int> temp_vec; 

        for (int j = 0; j < N; j++)
        {
            int valor;
            cin >> valor;
            temp_vec.push_back(valor);
        }

        sort(temp_vec.begin(), temp_vec.end());

        cidades.push_back(temp_vec);
    }

    for (int i = 0; i < cidades.size(); i++)
    {
        for (int j = 0; j < cidades[i].size(); j++)
        {
            cout << cidades[i][j];
            if(j < cidades[i].size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}