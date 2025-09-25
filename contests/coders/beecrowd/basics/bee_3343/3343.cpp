#include <iostream>
#include <string>
#include <map>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long n, x;
    std::string sstring;
    long long p, m, g;

    std::cin >> n >> x;
    std::cin >> sstring;
    std::cin >> p >> m >> g;

    std::map<char, long long> titan_sizes;
    titan_sizes['P'] = p;
    titan_sizes['M'] = m;
    titan_sizes['G'] = g;

    int muralhas = 1;
    long long capacidade_restante = x;

    for (unsigned int i = 0; i < sstring.length(); ++i) {
        long long titan_size = titan_sizes[sstring[i]];

        if (titan_size > capacidade_restante) {
            muralhas++;
            capacidade_restante = x - titan_size;
        } else {
            capacidade_restante -= titan_size;
        }
    }

    std::cout << muralhas << std::endl;

    return 0;
}