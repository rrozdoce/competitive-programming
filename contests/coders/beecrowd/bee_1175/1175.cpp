#include <iostream>
#include <vector>

using namespace std;
#define M 20

int main()
{
    vector<int> vec(20);
    int j = M - 1;
    int aux;

    for (int i = 0; i < M; i++)
    {
        cin >> vec[i];
    }

    for (int i = 0; i < M/2; i++)
    {
        aux = vec[i];
        vec[i] = vec[j];
        vec[j] = aux;
        j--;
    }

    for (int i = 0; i < M; i++)
    {
        cout << "N[" << i << "] = " << vec[i] << endl;
    }

    return 0;
}