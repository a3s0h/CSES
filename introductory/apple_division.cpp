#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int mod = 1e9+7;

void solve(int n ,vector<int> wt)
{
    // int sum =0 ;
    // for(auto it : wt)
    //     sum += it;
    // vector<vector<bool>> dp(n+1,vector<bool> (sum+1,false));

    // for(int i =0;i<=n;i++)
    // {
    //     for(int j =0 ;j<=sum;j++)
    //     {
    //         if(j==0)dp[i][j] = true;
            
    //     }
    // }
    // for(int i =1;i<=n;i++)
    // {
    // // cout<<"here i "<< i<<endl;
    //     for(int j = 1;j<=sum ;j++)
    //     {
    //         // cout<<"j : "<<j<<endl;
    //         if(wt[i-1] <= j)
    //         {
    //             dp[i][j] = dp[i-1][j-wt[i-1]] || dp[i-1][j];
    //         }
    //         else{
    //             dp[i][j] = dp[i-1][j];
    //         }
    //     }
    // }
    // vector<int> all_sums ;
    // for(int i = 0;i<=sum;i++)
    // {
    //     if(dp[n][i] == true)
    //     all_sums.push_back(i);
    //     // cout<<dp[n][i]<<endl;
    // }
    
    
    // int ans = INT_MAX ;
    // for(int i =0;i<all_sums.size()/2;i++)
    // {
    //     ans = min(ans,sum- (2*all_sums[i]));
    // }


    // cout<<ans<<endl;
    // return;


    // mthd - 2
    int ans = INT_MAX;
    int tt = 0;
    for(auto it : wt)
        tt+=it;
    for(int i =0;i < (1<<n) ;i++)
    {
        int sum = 0;
        for(int j = 0 ;j<n ;j++)
        {
            if((1 << j) &i) sum += wt[j];              // jo jo  element 1 ha une sum ma dalo and then ans ma fir jo bcha ha unka aur sum ka max le lo
        }
        ans = min(ans , abs(tt-sum-sum));
    }

    cout<<ans<<endl;


}

signed main()
{
    int n;
    cin>>n;
    vector<int> wt;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        wt.push_back(x);
    }
    solve(n,wt);
    return 0;
}