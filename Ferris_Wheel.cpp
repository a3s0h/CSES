#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int mod = 1e9+7;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n , k;
    cin>>n>>k;
    vector<int> nums;

    for(int i =0;i<n;i++)
    {
        int temp ; 
        cin>>temp;
        nums.push_back(temp);
    }

    // sort(nums.begin(),nums.end());

    // int maxGondola = INT_MIN;
    // int sum = 0;
    // // int cnt =0 ;
    // int i =0;
    // int j =0;
    // int cnt = 0 ;
    // k%= mod;
    // while(i < n)
    // {
    //     sum += nums[i];
    //     sum %= mod;
    //     if(sum == k)
    //     {
    //         cnt++;
    //         cnt %= mod;
    //         sum = 0;
    //         i++;
    //     }
    //     else if (sum > k)
    //     {
    //         maxGondola = max(maxGondola , cnt);
    //         while(j<i)
    //         {
    //             sum -= nums[j];
    //             j++;
    //             // cnt++;
    //             if(sum <= k)
    //             {
    //                 break;
    //             }

    //         }
    //         // cout<<"j : "<<j<<endl;
    //         i++;
    //         j=i;
    //         if(sum!=0)
    //         {
    //             cnt+=2;
    //             cnt %= mod;
    //             maxGondola = max(maxGondola , cnt);
    //             sum = 0;
    //         }


    //     }
    //     else{
    //         i++;
    //     }

    // }
    // cout<<max(maxGondola , cnt)<<endl;



    // mthd - 2
    // int max_gandola = INT_MIN;
    sort(nums.begin(),nums.end());
    reverse(nums.begin(),nums.end());

    int i =0;
    int j = n-1;
    int cnt = 0 ;
    while(i<=j)
    {
        if(nums[i] + nums[j] <= k)
        {
            cnt++;
            i++;
            j--;
        }
        else{
            cnt++;
            i++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}