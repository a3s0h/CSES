#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int mod = 1e9+7;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> num(n+1);
    vector<int> loc(n+1);
    for(int i =1;i<=n;i++)
    {
        cin>>num[i];
        loc[num[i]] = i;
    }
    // sort(num.begin(),num.end());
    int pass = 0;
    for(int i = 1;i<n;i++)
    {
        if(loc[i+1] < loc[i])
            pass++;
        
        // temp = num[i].second;
    }
    pass++;

    map<int,int> numPairs;
    // int a =0 , b=0 ;
    int a , b = 0;
    while(k--)
    {
        cin>>a>>b;
        // int l = a , r = b;
        if(num[a] - 1 >= 1) // kuki 0 toh ha hi nhi tehrefore 1 hi ha minimum number in array num
        {
            numPairs.insert({num[a]-1 , num[a]});
        }
        if(num[a] + 1 <= n)
        {
            numPairs.insert({num[a] , num[a]+1});
        }
        if(num[b] - 1 >= 1)
        {
            numPairs.insert({num[b]-1 , num[b]});
        }
        if(num[b] + 1 <= n)
        {
            numPairs.insert({num[b] , num[b]+1});
        }

        for( auto it : numPairs)
        {
            if(loc[it.first] > loc[it.second] )pass--;
        }

        swap(num[a],num[b]);
        loc[num[a]] = a;
        loc[num[b]] = b;

        for( auto it : numPairs)
        {
            if(loc[it.first] > loc[it.second] )pass++;
        }

        cout<<pass<<endl;
        numPairs.clear();

    }

    return 0;
}