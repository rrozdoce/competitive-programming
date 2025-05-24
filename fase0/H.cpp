#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>

using namespace std;

// Converte uma string binária para long long
long long binario_para_decimal(const string &s) {
    return stoull(s, nullptr, 2);
}

// Gera o próximo palíndromo binário (maior que 'num')
long long proximo_palindromo(long long num) {
    string s = bitset<64>(num).to_string();
    s = s.substr(s.find('1')); // Remove zeros à esquerda

    // Se todos os bits forem '1', o próximo palíndromo é 100..001
    if (all_of(s.begin(), s.end(), [](char c) { return c == '1'; })) {
        return (1LL << s.size()) + 1; // 100..001 (ex.: 111 → 1001)
    }

    // Caso contrário, incrementa o número e gera o palíndromo
    // (Implementação simplificada; pode ser melhorada)
    for (long long i = num + 1; ; i++) {
        string bin = bitset<64>(i).to_string();
        bin = bin.substr(bin.find('1'));
        string rev = bin;
        reverse(rev.begin(), rev.end());
        if (bin == rev) return i;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    while (cin >> N) {
        long long maior_palindromo = 0;

        // Gera palíndromos até ultrapassar N
        for (long long p = 1; p <= N; p = proximo_palindromo(p)) {
            if (p <= N) maior_palindromo = p;
        }

        cout << maior_palindromo << "\n";
    }

    return 0;
}