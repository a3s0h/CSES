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
    vector<pair<int,int>> t;
    for(int i =0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        t.push_back({x,y});
    }
    sort(t.begin(),t.end());
    int res = 0 ;
    int current =0 ;
    for(int i =0;i<n;i++)
    {
        if(i==0)
        {
            current = t[i].second;
            res++;
        }
        else
        {
            if(t[i].first >= current)
            {
                current = t[i].second;
                res++;

            }
            else{
                current = min(current , t[i].second);
            }
        }
    }

    cout<<res<<endl;

    return 0;
}