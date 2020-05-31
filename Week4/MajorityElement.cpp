#include <bits/stdc++.h>
using namespace std;

void findMajority(long long int a[], long long int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    int count(0);

    for (auto i : m)
    {
        if (i.second > n / 2)
        {
            count = 1;
            cout << 1 << endl;
            break;
        }
    }

    if (count == 0)
        cout << 0 << endl;
}

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];

    findMajority(a, n);
}
