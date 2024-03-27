#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int mod = 1e9+7;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t ;
    cin>>t;
    while(t--)
    {
        int n ,m ,k;
        cin>>n>>m>>k;
        vector<int> left_pocket , right_pocket;
        for(int i =0;i<n;i++)
        {
            int x;
            cin>>x;
            left_pocket.push_back(x);
        }
        for(int i =0;i<m;i++)
        {
            int x;
            cin>>x;
            right_pocket.push_back(x);
        }

        /* actual logic */

        sort(left_pocket.begin(),left_pocket.end());
        sort(right_pocket.begin(),right_pocket.end());

        // int i = 0;
        // int j = m-1;
        int res = 0; 
        for(int i = 0;i<n;i++)
        {
            int cnt = 0;
            for(int j = m-1 ; j >= 0 ; j--)
            {
                if(right_pocket[j] + left_pocket[i] <= k)
                {
                    break;
                }
                cnt++;
            }
            res += (m-cnt);
        }
        cout<<res<<endl;


    }

    return 0;
}