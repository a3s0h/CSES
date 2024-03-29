#include<bits/stdc++.h>
using namespace std;

// #define int long long ;

void solve(int n,int sum,int c[] )
{
   vector<vector<int>> dp(n+1,vector<int> (sum+1,0));

   for(int i =0;i<=n;i++)
   {
    for(int j =0;j<=sum;j++)
    {
        if(i==0)dp[i][j] = INT_MAX;
        if(j==0)dp[i][j] = 1;
    }
   }


   for(int i =1;i<=n;i++)
   {
    for(int j =1;j<=sum;j++)
    {
        if(c[i-1] <= j)
        {
            dp[i][j] = 1+dp[i][j-c[i-1]];
        }
        else{
            dp[i][j] = dp[i-1][j];
        }
    }
   }

   cout<<dp[n][sum]<<endl;

}

int main()
{
    int n,sum;
    cin>>n>>sum;
    int c[n];
    for(int i =0;i<n;i++)
        cin>>c[i];
    vector<vector<int>> dp(n,vector<int> (n,-1));
    solve(n,sum,c);
 
    return 0;
}