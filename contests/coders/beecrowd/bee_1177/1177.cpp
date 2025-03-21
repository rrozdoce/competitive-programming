#include <iostream>
#include <vector>

#define M 1000

using namespace std;

int main()
{
    vector<int> vec(M);
    int T, i = 0;
    cin >> T;
    if (!(T >= 2 && T <= 50))
    {
        return -1;
    }

    for (int j = 0; j < M; j++)
    {
        if (i == T)
        {
            i = 0;
        }
        vec[j] = i;
        cout << "N[" << j << "] = " << vec[j] << endl; 
        i++;
    }

    return 0;
}