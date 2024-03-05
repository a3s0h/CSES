#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int mod = 1e9+7;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> nums;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back({x,i});
    }

    sort(nums.begin(),nums.end());

    int i =0,j=n-1;
    
    while(i<j)
    {
        int temp = nums[i].first + nums[j].first;
        // cout<<"at i : "<<i <<" and j : "<<j <<" the temp value : "<<temp << endl;
        if(temp == x)
        {
            cout<<nums[i].second + 1<<" "<<nums[j].second+1<<endl;
            return 0;
        }
        else if (temp < x)
        {
            i++;
        }
        else 
            j--;
    }

    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}