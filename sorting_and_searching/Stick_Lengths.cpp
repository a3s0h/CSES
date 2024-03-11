#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int mod = 1e9+7;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<int> len;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        len.push_back(x);
    }
    sort(len.begin(),len.end());
    
    int avg = len[n/2];

    int res = 0;
    for(int i=0;i<n;i++)
    {
        res += abs(avg - len[i]);
    }

    cout<<res<<endl;

    return 0;
}