#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int mod = 1e9+7;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n ,m;
    cin>>n>>m;
    multiset<int> mp;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        mp.insert(x);
    }
    vector<int> res;
    for(int i =0;i<m;i++)
    {
        int max_customer_price;
        cin>>max_customer_price;
        auto idx = mp.upper_bound(max_customer_price);

        if(idx == mp.begin())
        {
            res.push_back(-1);
            continue;
        }
            
        else{
            res.push_back(*(--idx));
            mp.erase(idx);
        }

    }

    for(auto it : res)
        cout<<it<<endl;

    return 0;
}