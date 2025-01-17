#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long int fiboFast(long long int n)
{
    vector<long long> fib(n + 1);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
        fib[i] = (fib[i - 1] % 10 + fib[i - 2] % 10) % 10;
    return fib[n];
}

int main()
{
    long long int n;
    cin >> n;
    cout << fiboFast(n) << endl;
}