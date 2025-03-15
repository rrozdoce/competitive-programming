#include <bits/stdc++.h>
using namespace std;

// Função para encontrar todos os primos até n
vector<int> sieve_of_eratosthenes(int n)
{
    vector<bool> is_prime(n + 1, true); // Inicializa todos como primos
    is_prime[0] = is_prime[1] = false;  // 0 e 1 não são primos

    for (int p = 2; p * p <= n; p++)
    {
        if (is_prime[p])
        {
            // Marca todos os múltiplos de p como não primos
            for (int i = p * p; i <= n; i += p)
            {
                is_prime[i] = false;
            }
        }
    }

    // Coleta todos os números primos
    vector<int> primes;
    for (int p = 2; p <= n; p++)
    {
        if (is_prime[p])
        {
            primes.push_back(p);
        }
    }

    return primes;
}

int main()
{
    int n = 50;
    vector<int> primes = sieve_of_eratosthenes(n);

    cout << "Números primos até " << n << ":\n";
    for (int p : primes)
    {
        cout << p << " ";
    }
    cout << "\n";

    return 0;
}