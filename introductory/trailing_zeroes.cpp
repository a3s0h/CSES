#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    // if(n>=1 && n<10)
    // {
    //     cout<<"1"<<endl;
    //     return;
    // }

    int res = 0;
    while(n>0)
    {
        res+=n/5;
        n/=5;
    } 
    cout<<res<<endl;


}


int main()
{
    int n ;
    cin>>n;
    solve(n);
    return 0;
}