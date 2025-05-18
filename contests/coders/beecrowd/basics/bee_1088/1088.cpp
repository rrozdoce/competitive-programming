#include <iostream>
#include <vector>

// Aula: Algoritmos de Ordenação e Bibliotecas Complementares

using namespace std;

long long merge(vector<int>& vetor, int esq, int meio, int dir);
long long mergesort(vector<int>& vetor, int init, int end);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    while (cin >> n) {
        if (n == 0) break;

        vector<int> vetor(n);

        for (int i = 0; i < n; i++) {
            cin >> vetor[i];
        }

        long int inversoes = mergesort(vetor, 0, n - 1);

        cout << ((inversoes % 2 != 0) ? "Marcelo" : "Carlos") << '\n';
    }

    return 0;
}

long long mergesort(vector<int>& vetor, int init, int end) {
    if (init >= end) return 0;

    long long cont = 0;
    int meio = (init + end) / 2;

    cont += mergesort(vetor, init, meio);
    cont += mergesort(vetor, meio + 1, end);
    cont += merge(vetor, init, meio, end);

    return cont;
}

long long merge(vector<int>& vetor, int init, int meio, int end) {
    vector<int> temp(end - init + 1);
    int i = init, j = meio + 1, k = 0;
    long long cont = 0;

    while (i <= meio && j <= end) {
        if (vetor[i] <= vetor[j]) {
            temp[k++] = vetor[i++];
        } else {
            temp[k++] = vetor[j++];
            cont += (meio - i + 1);
        }
    }

    while (i <= meio) temp[k++] = vetor[i++];
    while (j <= end)  temp[k++] = vetor[j++];

    for (int i = 0; i < (int)temp.size(); i++) {
        vetor[init + i] = temp[i];
    }

    return cont;
}

