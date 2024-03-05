#include<bits/stdc++.h>
using namespace std;

#define int long long 

int coins[5] = {1,3,6,10,15};
int dp[1000100];
const int mod = 1e9 + 7;

void solve(int n )
{
    for(int i = 0 ;i<=n;i++)
    {
        if(i == 0)dp[i] = 0;
        else{
            dp[i] = 1e9;
            for(int j = 0;j<5;j++)
            {
                if(coins[j] <= i)
                {
                    dp[i] = min(dp[i] , 1+dp[i-coins[j]]);
                }
            }
            dp[i] %= mod;
        }
    }
    cout<<dp[n]<<endl;
}


signed main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        solve(n);
    }
    return 0;
}