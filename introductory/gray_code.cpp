#include<bits/stdc++.h>
using namespace std;

#define int long long 

void makeSol(int n , vector<string> &res)
{
    if(n==1)
    {
        res.push_back("0");
        res.push_back("1");
        return ;
    }

    makeSol(n-1,res);

    
    vector<string> s1, s2;
    for(int i =0;i<res.size();i++)
    {
        s1.push_back("0" + res[i]);
    }
    
    for(int i =res.size()-1;i>=0;i--)
    {
        s2.push_back("1" + res[i]);
    }

    res.clear();
    for(auto it : s1)
        res.push_back(it);
    for(auto it : s2)
        res.push_back(it);

}


void solve(int n)
{
    vector<string> res;

    makeSol(n,res);

    for(auto it : res)
    {
        cout<<it<<endl;
    }
}

signed main()
{
    int n ;
    cin>>n;
    
    solve(n);

    return 0;
}