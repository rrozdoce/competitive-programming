#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;

    while (cin >> N)
    {
        vector<vector<int>> matriz(N, vector<int>(N, 3));

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i == j && (i + j + 2) != N + 1)
                {
                    matriz[i][j] = 1;
                }

                if(i + j + 2 == N + 1)
                {
                    matriz[i][j] = 2;
                }
                
            }
            
        }


        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << matriz[i][j];
            }

            cout << endl;
            
        }
    }
    
    return 0;
}