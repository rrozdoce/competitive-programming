#include <iostream>
#include <string>
#include <vector>
#include <map>

// Problema Motivacional
// Numero e Titulo: 2588 - Jogo dos Palíndromos
// Resolvido: Kaio
// Aula: Manipulação de Strings

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string linha;

    while(getline(cin, linha)) {

        map<char, int> frec; int cont = 0;

        bool umImpar = false;

        for (auto& c : linha) {
            frec[c]++;
        }

        for (auto& [c, f] : frec) {
            if (f % 2 != 0) {
                if (!umImpar)
                    umImpar = true;
                else
                    cont++;
            }
        }
        cout << cont << "\n";
    }

    return 0;
}

