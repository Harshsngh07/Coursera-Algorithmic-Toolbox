#include <bits/stdc++.h>
using namespace std;

int fiboFast(int n)
{
    if (n == 0 or n == 1)
        return n;

    int arr[n];

    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    cout << fiboFast(n) << endl;
}