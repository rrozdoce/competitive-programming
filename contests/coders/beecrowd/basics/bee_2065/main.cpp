#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Your code here

    int n, m, vi, cj;

    priority_queue<int, pair<int, int>>> func;
    queue<int> clientes;
    pair<int, pair<int, int>> temp;

    cin >> n >> m;

for(int i = 0; i < n; i++) {
        cin >> vi;
        temp.first = (0);
        temp.second = make_pair((-i), (-1*vi));
        func.push(temp);
    }

    for(int i = 0; i < m; i++) {
        cin >> cj;
        clientes.push(cj);
    }

    while(!clientes.empty()) {

      temp = func.temp();
      func.pop();

      temp.first = temp
    }


    return 0;
}