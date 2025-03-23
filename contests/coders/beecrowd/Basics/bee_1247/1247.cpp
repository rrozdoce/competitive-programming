#include <iostream>
#include <cmath>

/*
Conceito(pitagoras):
   - D (1 ≤ D ≤ 100), VF (1 ≤ VF ≤ 100) e VG (1 ≤ VG ≤ 100)
   - VF => velocidade do fugitivo em nós
   - VG => velocidade da guarda costeira em nós
   - D => distancia entre elas(no inicio D)
   - 12 milhas nauticas => distancia de uma costa até a outra
   - T = D/V, sendo:
      - T, o tempo em milha/nós
      - D, distancia em milhas
      - V, velocidade em nós
*/

#define M 12

using namespace std;

int main()
{

    double d, vf, vg;
    while (cin >> d >> vf >> vg)
    {
        double dg = sqrt((d * d) + (M * M));
        double tg, tf;

        tg = dg / vg;
        tf = M / vf;

        cout << ((tg <= tf) ? "S" : "N") << endl;
    }

    return 0;
}