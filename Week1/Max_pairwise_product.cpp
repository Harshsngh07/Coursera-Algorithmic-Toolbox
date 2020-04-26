#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long maxPairWiseProduct(vector<long long> v, int n)
{
    long long prod = 0;
    sort(v.begin(), v.end());
    prod = v[n - 1] * v[n - 2];
    return prod;
}

int main()
{
    int n;
    cin >> n;
    vector<long long> numbers(n);
    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    cout << maxPairWiseProduct(numbers, n);
}