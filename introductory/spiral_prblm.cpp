#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define vl vector<int> 

const int mod = 1e9+7;

void solve(int n) {
    while(n--)
    {
        int x,y;
        cin>>x>>y;

        int ans =0 ;
        

        if(y > x)
        {
            int maxi = y*y;
            int mini = (y-1) * (y-1);
            if(y%2 == 0)
            {
                ans = mini+x;
            }
            else{
                ans = maxi - x+1;
            }
        }
        else{
            // cout<<"hee"<<endl;
            int maxi = x*x;
            int mini = (x-1) * (x-1);
            if(x%2 == 0)
            {
                ans = maxi - y + 1;
            }
            else{
                ans = mini + y;
            }
        }

        cout<<ans<<endl;

    }
}

signed main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}
