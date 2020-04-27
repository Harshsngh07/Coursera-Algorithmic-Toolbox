#include <bits/stdc++.h>
using namespace std;

int gcd_fast(int a, int b)
{
    if (b == 0)
        return a;
    else
        a = a % b;
    return gcd_fast(b, a);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd_fast(a, b) << endl;
}