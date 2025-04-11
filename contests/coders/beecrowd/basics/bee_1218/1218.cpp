#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<string,int> ump;

    string line1,line2;
    int ncasos = 0;
    
    while(getline(cin,line1))
    {
        ump.clear();
        if (ncasos != 0)cout<<"\n";

        getline(cin,line2);
        istringstream iss(line2);
        string tamanho,genero;
        while (iss >> tamanho >> genero)
        { 
            if(line1.compare(tamanho) == 0) ump[genero]++;
            
        } 
        cout << "Caso "<< ncasos+1 <<":\n";
        cout << "Pares Iguais: "<< ump["F"]+ump["M"] <<"\n";
        cout <<"F: " << ump["F"] << "\n"; 
        cout <<"M: " << ump["M"] << "\n";

        ncasos++;
    } 
    return 0;
}
