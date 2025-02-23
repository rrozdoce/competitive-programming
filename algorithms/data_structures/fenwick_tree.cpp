#include <bits/stdc++.h>
using namespace std;

class FenwickTree
{
private:
    vector<int> tree; // Árvore Fenwick
    int n;            // Tamanho do array

public:
    // Construtor: inicializa a árvore com tamanho n+1
    FenwickTree(int size)
    {
        n = size;
        tree.assign(n + 1, 0); // Inicializa a árvore com zeros
    }

    // Atualiza o valor na posição index, somando value
    void update(int index, int value)
    {
        while (index <= n)
        {
            tree[index] += value;
            index += index & -index; // Move para o próximo nó
        }
    }

    // Retorna a soma dos elementos do início até o índice index
    int query(int index)
    {
        int sum = 0;
        while (index > 0)
        {
            sum += tree[index];
            index -= index & -index; // Move para o nó pai
        }
        return sum;
    }

    // Retorna a soma dos elementos no intervalo [left, right]
    int range_query(int left, int right)
    {
        return query(right) - query(left - 1);
    }
};

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11}; // Array original
    int n = arr.size();

    FenwickTree fenwick(n); // Cria a Fenwick Tree

    // Constrói a árvore inicial
    for (int i = 0; i < n; i++)
    {
        fenwick.update(i + 1, arr[i]); // +1 porque a árvore começa no índice 1
    }

    // Consultas de soma
    cout << "Soma dos primeiros 4 elementos: " << fenwick.query(4) << "\n";    // 1 + 3 + 5 + 7 = 16
    cout << "Soma do intervalo [2, 5]: " << fenwick.range_query(2, 5) << "\n"; // 3 + 5 + 7 + 9 = 24

    // Atualiza o valor na posição 3 (índice 2 no array)
    fenwick.update(3, 10 - arr[2]); // Atualiza de 5 para 10
    arr[2] = 10;                    // Atualiza o array original

    // Nova consulta
    cout << "Nova soma do intervalo [2, 5]: " << fenwick.range_query(2, 5) << "\n"; // 3 + 10 + 7 + 9 = 29

    return 0;
}