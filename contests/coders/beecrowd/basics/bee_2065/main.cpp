// Problema Motivacional
// Numero e Titulo: 2065 Fila do Supermercado
// Resolvido: Fabricio
// Aula: Linked Lists e Heap
#include <iostream>
#include <queue>

using namespace std;


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,m,vi,cj,last=0;
    cin >> n >> m;

    priority_queue<pair<int,pair<int,int>>> func;
    queue<int> clientes;
    pair<int,pair<int,int>> temp;

    for (int i = 0; i < n; i++)
    {
        cin >> vi;
        temp.first = (0);
        temp.second = make_pair((-i),(-1 * vi));
        func.push(temp);
    }

    for (int i = 0; i < m; i++)
    {
        cin>>cj;
        clientes.push(cj);
    }


    while (!clientes.empty())
    {
        temp = func.top();
        func.pop();

        temp.first -= temp.second.second*(-1)*clientes.front();
        func.push(temp);
        clientes.pop();
    }

    while (!func.empty())
    {
        last = (-1) * func.top().first;
        func.pop();
    }
    cout << last << '\n';

    return 0;
}