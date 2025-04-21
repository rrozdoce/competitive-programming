//Numero e Titulo: 1609 - Contando Carneirinhos
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
// --FIX sstrt
int main(int argc, char const *argv[])
{
    int numeroCasos, numOvelhas, ovelha;
    //vector<int> vectorOvelhas;
    unordered_set<int> ovelhas;
    vector<int> respostas;


    cin >> numeroCasos;

    for (int i = 0; i < numeroCasos; i++)
    {
        ovelhas.clear();
        cin >> numOvelhas;

        for (int j = 0; j < numOvelhas; j++)
        {
            cin >> ovelha;
            ovelhas.insert(ovelha);

        }
        respostas.push_back(ovelhas.size());

    }

    for (int i = 0; i < (int)respostas.size(); i++)
    {
        cout << respostas.at(i) << "\n";
    }


    return 0;
}
