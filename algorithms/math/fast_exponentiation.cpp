#include <bits/stdc++.h>
using namespace std;

// Função para calcular a^b mod m
long long fast_exponentiation(long long a, long long b, long long m)
{
    long long result = 1;
    a = a % m; // Reduz a base para o intervalo [0, m-1]

    while (b > 0)
    {
        // Se b é ímpar, multiplica o resultado pela base
        if (b % 2 == 1)
        {
            result = (result * a) % m;
        }

        // Eleva a base ao quadrado e divide o expoente por 2
        a = (a * a) % m;
        b = b / 2;
    }

    return result;
}

int main()
{
    long long a = 2, b = 10, m = 1000;
    cout << a << "^" << b << " mod " << m << " = " << fast_exponentiation(a, b, m) << "\n";
    return 0;
}