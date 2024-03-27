#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int mod = 1e9+7;


signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n ;
    cin>>n;
    vector<int> coins ; 
    int sum = 0;
    for(int i =0;i<n;i++)
    {
        int x ;
        cin>>x;
        sum += x;
        coins.push_back(x);
    }


    // for smaller inputs 
    // vector<vector<int>> dp(n+1, vector<int>(sum+1,0));
    
    // for(int i =0;i<=n;i++)
    // {
    //     for(int j = 0;j<=sum ; j++)
    //     {
    //         if(j==0)
    //             dp[i][j] = 1;
    //     }
    // }

    // for(int i = 1;i<=n;i++)
    // {
    //     for(int j = 1;j<=sum;j++)
    //     {
    //         if(coins[i-1] <= j)
    //         {
    //             dp[i][j] = dp[i-1][j-coins[i-1]] || dp[i-1][j];
    //         }
    //         else{
    //             dp[i][j] = dp[i-1][j];
    //         }
    //     }
    // }

    // int res = 0 ;
    // for(int i = 1;i<=sum;i++)
    // {
    //     if(dp[n][i] == 0 )
    //     {
    //         res = i;
    //         break;
    //     }
    // }
    // if(res == 0)res = sum+1;
    // cout<<res<<endl;
    


    // mthd - 2 
    sort(coins.begin(),coins.end());
    int target = 1;
    for(int i =0;i<n;i++)
    {
        if(coins[i] > target)
        {
            break;
        }
        
        target += coins[i];
    }

    cout<<target<<endl;

    return 0;
}