#include <bits/stdc++.h>
using namespace std;

void bfs(int source, vector<vector<int>> &graph, vector<int> &dist)
{
    int n = graph.size();
    dist.assign(n, -1); // Inicializa todas as distâncias como -1 (não visitado)
    dist[source] = 0;   // Distância da origem para ela mesma é 0

    queue<int> q;
    q.push(source); // Insere a origem na fila

    while (!q.empty())
    {
        int u = q.front(); // Pega o próximo nó da fila
        q.pop();

        for (int v : graph[u])
        { // Para cada vizinho de u
            if (dist[v] == -1)
            {                          // Se v não foi visitado
                dist[v] = dist[u] + 1; // Atualiza a distância
                q.push(v);             // Insere v na fila
            }
        }
    }
}

int main()
{
    int n = 5;                    // Número de nós
    vector<vector<int>> graph(n); // Lista de adjacência: graph[u] = {v, ...}

    // Exemplo de grafo
    graph[0] = {1, 2};
    graph[1] = {0, 3};
    graph[2] = {0, 3, 4};
    graph[3] = {1, 2, 4};
    graph[4] = {2, 3};

    vector<int> dist;
    bfs(0, graph, dist); // Calcula as distâncias a partir do nó 0

    cout << "Distâncias a partir do nó 0:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Nó " << i << ": " << dist[i] << "\n";
    }

    return 0;
}