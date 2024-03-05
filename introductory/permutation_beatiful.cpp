#include<bits/stdc++.h>
using namespace std;

#define vl vector<int> 
#define int long long 

void solve(int n) {
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    if(n<=3)
    {
        cout<<"NO SOLUTION"<<endl;
        return ;
    }

    else{
        vl eve,odd;
        for(int i = 1;i<=n;i++)
        {
            if(i%2==0)eve.push_back(i);
            else odd.push_back(i);
        }

        for(auto it : eve)cout<<it<<" ";
        for(auto it : odd)cout<<it<<" ";


    }
}

signed main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}
