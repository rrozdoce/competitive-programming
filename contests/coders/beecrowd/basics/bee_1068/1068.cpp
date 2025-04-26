#include <iostream>
#include <stack>
#include <string>

// Problema Motivacional
// Numero e Titulo: 1068 - Balanço de Parênteses I
// Resolvido: Kaio
// Aula: Stack e Queue

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  
    string linha;
    
    while (getline(cin, linha)) {
     
        stack<char> pilha;
        bool isCorrect = true;
        
        for (auto &c : linha) {
            
            if (c == '(') { 
                pilha.push('(');  
            }
            else if (c == ')') {
                if (!pilha.empty()) {
                    pilha.pop();    
                }
                else {
                    isCorrect = false;
                    break;
                }
            }          
        }
        
        if (isCorrect && pilha.empty()) {
            cout << "correct\n";
        }
        
        else {
            cout << "incorrect\n";
        }
    }

    return 0;
}
