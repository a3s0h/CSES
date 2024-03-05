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
        int n ;
        cin>>n;
        int a = 0,b=0;
        bool isMade = false;
        int i = 0 ;
        while(n>0 && !isMade)
        {
            b = pow(10,i) * (n%10);
            a /=10;
            n=a;
            i++;
            if(n%10!=0 && a>b)isMade = true;
        }
        if(!isMade)cout<<"-1"<<endl;
        else cout<<b<<" "<<a<<endl;
    }

    return 0;
}