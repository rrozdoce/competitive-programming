// Problema Motivacional
// Numero e Titulo: 1110 Jogando Cartas Fora
// Resolvido: Fabricio
// Aula: Queue e Stack
#include <iostream>
#include <queue>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string line;
    int number;
    queue<int> fila,descartados;
    while (getline(cin,line))
    {

        number = stoi(line);
        if (number == 0) break;
        while (!fila.empty())fila.pop();
        while (!descartados.empty())descartados.pop();
        
        
        for (int i = 1; i <= number; i++)fila.push(i);

        while (fila.size() > 1)
        {
            descartados.push(fila.front());
            fila.pop();
            fila.push(fila.front());
            fila.pop();

        }
        cout << "Discarded cards: ";
        while (!descartados.empty())
        {
            if (descartados.size() == 1)
                cout << descartados.front();     
            else
                cout << descartados.front() << ", ";
           descartados.pop();
        }
        cout <<"\n";
        cout << "Remaining card: "<< fila.front()<<"\n";
    }
    
    return 0;
}
