#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int product(0);
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
        {
            if (i != j)
                if (product < a[i] * a[j])
                    product = a[i] * a[j];
        }

    cout << product;
}