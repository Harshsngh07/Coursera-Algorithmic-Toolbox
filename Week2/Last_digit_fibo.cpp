#include <bits/stdc++.h>
using namespace std;

long long int fiboFast(long long int n)
{
    if (n == 0 or n == 1)
        return n;

    long long int arr[n];

    long long int a = 0, b = 1, c;
    for (int i = 0; i < n - 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return fabs(c % 10);
}

int main()
{
    long long int n;
    cin >> n;
    cout << fiboFast(n) << endl;
}