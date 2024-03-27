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
    // cout<<"j"<<endl;
    vector<int> num(n);
    for(int i =0;i<n;i++)
    {
        cin>>num[i];
    }

    int i = 0;
    int j =0 ;
    map<int,int> mp;

int res =0 ;
    while(j<n)
    {
        mp[num[j]]++;
        if(mp.find(num[j]) != mp.end())
        {
            // cout<<"here"<<endl;
            int len = mp.size();
            res = max(res , len);
            while(i<n && i<j && mp[num[j]]!=1)
            {
                mp[num[i]]--;
                if(mp[num[i]] <= 0)mp.erase(num[i]);
                i++;
            }
        }
        // cout<<"at j : "<<j<<endl;
        j++;
    }

    cout<<res<<endl;
    return 0;
}