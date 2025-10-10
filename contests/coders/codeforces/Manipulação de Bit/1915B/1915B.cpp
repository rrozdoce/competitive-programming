#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <numeric>

using namespace std;

// Função auxiliar para converter 'A', 'B', 'C' para 1, 2, 3
int char_to_int(char c) {
    if (c == 'A') return 1;
    if (c == 'B') return 2;
    if (c == 'C') return 3;
    return 0; // Para '?'
}

// Função auxiliar para converter 1, 2, 3 para 'A', 'B', 'C'
char int_to_char(int i) {
    if (i == 1) return 'A';
    if (i == 2) return 'B';
    if (i == 3) return 'C';
    return '?';
}

void solve() {
    // Como o problema diz que o tamanho é sempre 3x3, e o input
    // de 't' é o número de casos de teste, o tamanho da matriz é fixo em 3.
    const int N = 3;
    vector<string> grid(N);
    int row_q = -1, col_q = -1; // Posição do '?'

    // Leitura do caso de teste e localização do '?'
    for (int i = 0; i < N; ++i) {
        cin >> grid[i];
        for (int j = 0; j < N; ++j) {
            if (grid[i][j] == '?') {
                row_q = i;
                col_q = j;
            }
        }
    }

    // 1. Verificar a LINHA que contém o '?'
    int xor_row = 0;
    for (int j = 0; j < N; ++j) {
        if (grid[row_q][j] != '?') {
            xor_row ^= char_to_int(grid[row_q][j]);
        }
    }

    // O valor do caractere faltante na linha é o XOR dos dois presentes.
    // Isso é o valor do caractere faltante em *binário* (1, 2 ou 3).
    int missing_val_row = xor_row;

    // 2. Verificar a COLUNA que contém o '?'
    int xor_col = 0;
    for (int i = 0; i < N; ++i) {
        if (grid[i][col_q] != '?') {
            xor_col ^= char_to_int(grid[i][col_q]);
        }
    }

    // O valor do caractere faltante na coluna é o XOR dos dois presentes.
    int missing_val_col = xor_col;

    // O caractere faltante deve satisfazer tanto a regra da linha quanto a da coluna.
    // Como o problema garante que a entrada é um Quadrado Latino com *apenas um* '?',
    // e A XOR B XOR C = 0, os dois resultados (missing_val_row e missing_val_col)
    // devem ser idênticos e o valor correto.

    // Imprime o caractere correspondente ao valor encontrado.
    cout << int_to_char(missing_val_row) << "\n";
}

int main() {
    // Otimização de I/O em C++
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    // O primeiro número lido é o número de casos de teste 't'
    cin >> t;

    // Loop para cada caso de teste
    while (t--) {
        solve();
    }

    return 0;
}