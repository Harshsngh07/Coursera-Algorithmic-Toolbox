
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    long long int count(1);

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
            count++;
    }

    if (count > n / 2)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    //cout << count;
}
