#include <iostream>
#include <iomanip> // Para std::fixed e std::setprecision
#include <vector>

using namespace std;

int main()
{
    vector<double> A(100);

    for (int i = 0; i < 100; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < 100; i++)
    {
        if (A[i] <= 10)
        {

            // Usando std::fixed e std::setprecision para garantir uma casa decimal
            cout << "A[" << i << "] = " << fixed << setprecision(1) << A[i] << endl;
        }
    }

    return 0;
}

/*


A[1] = -242 // minha saida
A[1] = -242.0 // esperado

A[4] = -3 // minha saida
A[4] = -3.0 // esperado
Outras diferenças foram encontradas neste caso de teste!
*/