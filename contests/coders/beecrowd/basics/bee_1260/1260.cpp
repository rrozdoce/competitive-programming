// Problema Motivacional
// Numero e Titulo: 1260 - Espécies de Madeira 
// Resolvido: Kaio
// Aula: Map e Unordered_map

#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    string linha;
    for (int i = 0; i < n; ++i) {
        map<string, int> especies;
        int total = 0;


        while (getline(cin, linha)) {
            if (linha.empty() && total > 0) { break; };
            if (!linha.empty()) {
                especies[linha]++;
                total++;    
            }
    
        }

        for (const auto& [nome, qtd] : especies) {
            double porc = (double(qtd) / total) * 100.0;
            cout << nome << " " << fixed << setprecision(4) << porc << '\n';
        }


        if (i != n - 1) cout << '\n';
    }

    return 0;
}
