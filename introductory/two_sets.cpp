#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vl vector<int>

const int mod = 1e9 + 7;

void solve(int n)
{

    vector<int> nums;
    for (int i = n; i > 0; i--)
        nums.push_back(i);

    vector<int> n1,n2;

    bool flag = true;

    int i = 0;
    while(i<n)
    {
        if(flag)
        {
            if(i<n)
            {
                n1.push_back(nums[i]);
                i++;
            }
            if(i<n)
            {
                n2.push_back(nums[i]);
                i++;
            }
            flag = false;
        }
        else{
            if(i<n)
            {
                n2.push_back(nums[i]);
                i++;
            }
            if(i<n)
            {
                n1.push_back(nums[i]);
                i++;
            }
            flag = true;
        }
    }
    cout<<n1.size()<<endl;
    for(auto it : n1)
        cout<<it<<" ";
    cout<<endl;
    cout<<n2.size()<<endl;
    for(auto it : n2)
        cout<<it<<" ";
    cout<<endl;

}

signed main()
{
    int n;
    cin >> n;

    if (n * (n + 1) % 4 == 0)
    {
        cout<<"YES"<<endl;
        solve(n);
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
