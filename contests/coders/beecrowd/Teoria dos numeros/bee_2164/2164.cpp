#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
// ull = unsigned long long


// caro O(2^n) exponencial - ruim
ull fib_recursive(ull n)
{
    if(n<=1) return n;
    return fib_recursive(n-1)+fib_recursive(n-2);
}

// bom O(n) tempo linear - legal
ull fib_iterativo(ull n)
{
    if(n<=1) return n;
    ull a=0,b=1,tmp;1

    for(ull i=2;i<=n;i++)
    {
        tmp = a+b;
        a=b;
        b=tmp;
    }
    return b;
}
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    unsigned x;

    cin >> x;

    cout << fixed << setprecision(1) << (double)(pow((1+sqrt(5))/2.0, x) - pow((1-sqrt(5))/2.0, x))/sqrt(5) << "\n";

    return 0;
}