#include <bits/stdc++.h>
using namespace std;

class SegmentTree
{
private:
    vector<int> tree; // Árvore de segmentos
    int n;            // Tamanho do array original

    // Constrói a árvore recursivamente
    void build(const vector<int> &arr, int node, int start, int end)
    {
        if (start == end)
        {
            // Nó folha: armazena o valor do array
            tree[node] = arr[start];
        }
        else
        {
            int mid = (start + end) / 2;
            // Constrói os filhos esquerdo e direito
            build(arr, 2 * node, start, mid);
            build(arr, 2 * node + 1, mid + 1, end);
            // Combina os resultados dos filhos
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }

    // Atualiza o valor na posição index
    void update(int node, int start, int end, int index, int value)
    {
        if (start == end)
        {
            // Nó folha: atualiza o valor
            tree[node] = value;
        }
        else
        {
            int mid = (start + end) / 2;
            if (index <= mid)
            {
                // Atualiza no filho esquerdo
                update(2 * node, start, mid, index, value);
            }
            else
            {
                // Atualiza no filho direito
                update(2 * node + 1, mid + 1, end, index, value);
            }
            // Atualiza o nó atual com a soma dos filhos
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }

    // Consulta a soma no intervalo [left, right]
    int query(int node, int start, int end, int left, int right)
    {
        if (right < start || left > end)
        {
            // Intervalo completamente fora
            return 0;
        }
        if (left <= start && end <= right)
        {
            // Intervalo completamente dentro
            return tree[node];
        }
        // Intervalo parcialmente dentro
        int mid = (start + end) / 2;
        int left_sum = query(2 * node, start, mid, left, right);
        int right_sum = query(2 * node + 1, mid + 1, end, left, right);
        return left_sum + right_sum;
    }

public:
    // Construtor: inicializa a árvore com o array fornecido
    SegmentTree(const vector<int> &arr)
    {
        n = arr.size();
        tree.resize(4 * n);      // Tamanho da árvore: 4 * n (suficiente para o pior caso)
        build(arr, 1, 0, n - 1); // Constrói a árvore a partir do array
    }

    // Atualiza o valor na posição index para value
    void update(int index, int value)
    {
        update(1, 0, n - 1, index, value);
    }

    // Retorna a soma no intervalo [left, right]
    int query(int left, int right)
    {
        return query(1, 0, n - 1, left, right);
    }
};

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11}; // Array original
    SegmentTree segTree(arr);              // Cria a Segment Tree

    // Consultas de soma
    cout << "Soma do intervalo [1, 4]: " << segTree.query(1, 4) << "\n"; // 3 + 5 + 7 + 9 = 24
    cout << "Soma do intervalo [0, 5]: " << segTree.query(0, 5) << "\n"; // 1 + 3 + 5 + 7 + 9 + 11 = 36

    // Atualiza o valor na posição 2 (índice 2 no array)
    segTree.update(2, 10); // Atualiza de 5 para 10
    arr[2] = 10;           // Atualiza o array original

    // Nova consulta
    cout << "Nova soma do intervalo [1, 4]: " << segTree.query(1, 4) << "\n"; // 3 + 10 + 7 + 9 = 29

    return 0;
}