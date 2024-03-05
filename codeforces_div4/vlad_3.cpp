#include<bits/stdc++.h>
using namespace std ;

#define int long long 

int makeSingle(int n)
{
    int ans =0 ;
    while(n>0)
    {
        ans += n%10;
        n/=10;
    }
    return ans;
}

signed main()
{
    int n ;
    cin>>n;
    while(n--)
    {
        int t ;
        cin>>t;
        int sum = 0 ;
        for(int i =1;i<=t;i++)
        {
            if(i>9)
            {
                // cout<<"going for : "<<i<<endl;
                sum += makeSingle(i);
                // cout<<makeSingle()
            }
            else{
                sum += i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}