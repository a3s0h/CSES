#include<bits/stdc++.h>
using namespace std;

#define int long long
const int mod = 1e9+7;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<pair<int,int>> num(n);
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        num[i].first = x;
        num[i].second = i+1;
    }
    sort(num.begin(),num.end());
    int temp = -1;
    int rnd = 1;
    for(int i =0;i<n;i++)
    {
        if(num[i].second < temp)
            rnd++;
        
        temp = num[i].second;
    }

    cout<<rnd<<endl;
   


    return 0;
}
