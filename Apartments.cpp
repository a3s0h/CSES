#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int mod = 1e9+7;

signed main()
{
    int n ,m,k;
    cin>>n>>m>>k;
    vector<int> des , appartment;

    for(int i =0;i<n;i++) 
    {
        int x;cin>>x;
        des.push_back(x);
    }
    for(int i =0;i<m;i++) 
    {
        int x;cin>>x;
        appartment.push_back(x);
    }

    sort(des.begin(),des.end());
    sort(appartment.begin(),appartment.end());

    int cnt =0 ;
    for(int i =0;i<n;i++)
    {
        for(int j =0 ;j<m;j++)
        {
            if(des[i] > (appartment[j]-5) && des[i] < (appartment[j]+5))
            {
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    

    return 0;
}