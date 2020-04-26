#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maxPairWiseProduct(const vector<int> &numbers)
{
    int prod = 0;
    int n = numbers.size();
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            prod = max(prod, numbers[i] * numbers[j]);
    return prod;
}

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    cout << maxPairWiseProduct(numbers);
}