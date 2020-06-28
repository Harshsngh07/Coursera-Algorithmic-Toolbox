#include <bits/stdc++.h>
using namespace std;
int get_change(int m, int coins[], int T, int dp[])
{
    //write your code here

    if(m==0)
        return 0;
    
    if(dp[m]!=0)
        return dp[m];

    int ans = INT_MAX;
    for(int i=0;i<T;i++)
    {
        if(m-coins[i]>=0)
        {
            int sub = get_change(m-coins[i], coins, T, dp);
            ans = min(ans, sub+1);
        }
    }    
    
    dp[m] = ans;
    return dp[m];
}

int main()
{
    int m;
    cin >> m;
    int dp[100] = {0};
    int coins[3] = {1,3,4};
    int T = sizeof(coins)/sizeof(int);
    cout << get_change(m,coins, T, dp) << '\n';
}
