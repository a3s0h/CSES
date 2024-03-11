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
    int sum = 0, maxSum = INT_MIN;
    for(int i =0;i<n;i++)
    {
        int x ;
        cin>>x;
        sum += x;
        if(sum < 0)
        {
            maxSum = max(maxSum , sum);
            sum = 0 ;
            continue;
        }

        maxSum = max(maxSum , sum);

    }
    cout<<maxSum<<endl;
    return 0;
}