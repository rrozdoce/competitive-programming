#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii; // Par (distância, nó)

void dijkstra(int source, vector<vector<pii>> &graph, vector<int> &dist)
{
    int n = graph.size();
    dist.assign(n, INT_MAX); // Inicializa todas as distâncias como infinito
    dist[source] = 0;        // Distância da origem para ela mesma é 0

    priority_queue<pii, vector<pii>, greater<pii>> pq; // Min-heap
    pq.push({0, source});                              // Insere a origem na fila de prioridade

    while (!pq.empty())
    {
        int u = pq.top().second; // Pega o nó com menor distância
        int d = pq.top().first;  // Distância até u
        pq.pop();

        if (d > dist[u])
            continue; // Se já encontramos um caminho melhor, ignoramos

        for (auto &edge : graph[u])
        {
            int v = edge.first;  // Nó vizinho
            int w = edge.second; // Peso da aresta u -> v

            if (dist[u] + w < dist[v])
            { // Relaxamento
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    int n = 5;                    // Número de nós
    vector<vector<pii>> graph(n); // Lista de adjacência: graph[u] = {(v, w), ...}

    // Exemplo de grafo
    graph[0] = {{1, 4}, {2, 1}};
    graph[1] = {{3, 1}};
    graph[2] = {{1, 2}, {3, 5}};
    graph[3] = {{4, 3}};
    graph[4] = {};

    vector<int> dist;
    dijkstra(0, graph, dist); // Calcula as distâncias a partir do nó 0

    cout << "Distâncias a partir do nó 0:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Nó " << i << ": " << dist[i] << "\n";
    }

    return 0;
}