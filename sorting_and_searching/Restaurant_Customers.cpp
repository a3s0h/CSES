#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int mod = 1e9+7;

// void comp(int &a , int &b)
// {
//     return a < b;
// }

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t ;
    // cin>>t;
    // int n = t;
    // vector<vector<int>> customer;
    // while(t--)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     customer.push_back({x,y});
    // }

    // sort(customer.begin(),customer.end());

    // int cnt = 1 ;
    // int max_cnt= INT_MIN;
    // for(auto it : customer)
    // {
    //     cout<<it[0] <<" "<<it[1]<<endl;
    // }
    // int leaving_time = customer[0][1];
    // for(int i = 1;i<n;i++)
    // {
    //     if(customer[i][0] <= leaving_time && customer[i][0] < customer[i-1][1])
    //     {
    //         cnt++;
    //         cout<<"here when : room : "<<i<<" cnt becomes : " << cnt<<endl;
    //     }
    //     else{
    //         cout<<"when not compared at : "<<i<<endl;
    //         leaving_time = customer[i][1];
    //         max_cnt = max(cnt,max_cnt);
    //         cnt = 1;
    //     }
    // }
    // cout<<max(max_cnt,cnt)<<endl;


    // correct - mthd : 

    int n;
    cin>>n;
    map<int,int> mp;
    for(int i =0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        mp[x]++;
        mp[y]--;
    }
    int ans =0 ;
    int maxi = 0 ;
    for(auto it : mp)
    {
        ans += it.second;
        maxi = max(maxi , ans);
    }

    cout<<maxi<<endl;
    return 0;
}


/*

       #---------------------------#
                   #---------#
  #----------------------------------#
     #-------------------------------------#
                                           #-----#
#---------#
               #------------------------#
*/