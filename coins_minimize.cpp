#include<bits/stdc++.h>
using namespace std;

// #define int long long ;
const long long int mod = 1e9 + 7;
long long int dp[1000100];

void solve(int n,int sum,int c[] )
{
    
    for(long long int i =0 ;i<=sum;i++)
    {
        if(i==0)
            dp[i] = 0;
        else{
            dp[i]=1e9;
            for(long long int j = 0;j<n;j++)
            {
                if(c[j] <=i ) dp[i] =min(dp[i] , 1+dp[i-c[j]]);
            }
            dp[i] %= mod;
        }
    }
    if(dp[sum] == 1e9) {cout<<"-1"<<endl;return;}
    cout<<dp[sum]<<endl;

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
        // cout<<"cnt "<<cnt<<endl;
    
    return 0;
}