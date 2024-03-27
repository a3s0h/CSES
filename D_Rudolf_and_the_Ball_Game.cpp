#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int mod = 1e9+7;



void solve(int n , int m , int x , vector<pair<string,char>> &dist)
{
    set<int> res;
    res.insert(x);

    for(int i =0;i<m;i++)
    {
        if(dist[i].second == '0')
        {
            set<int> temp;
            for(auto it : res)
            {
                int pos = it + stoi(dist[i].first);
                if(pos > n)pos -= n;
                temp.insert(pos);
            }
            res.insert(temp.begin() , temp.end());
        }
        else if(dist[i].second == '1')
        {
            set<int> temp;
            for(auto it : res)
            {
                int pos = it + stoi(dist[i].first);
                if(pos > n)pos += n;
                temp.insert(pos);
            }
            res.insert(temp.begin() , temp.end());
        }
        else{
            set<int> temp;
            for(auto it : res)
            {
                int pos = it + stoi(dist[i].first);
                if(pos > n)pos -= n;
                temp.insert(pos);
            }
            res.insert(temp.begin() , temp.end());
        }
    }

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t ;
    cin>>t;
    while(t--)
    {
        int n, m , x;
        cin>>n>>m>>x;
        vector<pair<string,char>> dist;
        for(int i =0;i<m;i++)
        {
            string c1;char c2;
            cin>>c1>>c2;
            dist.push_back({c1,c2});
        }
        solve(n,m,x,dist);
    }

    return 0;
}