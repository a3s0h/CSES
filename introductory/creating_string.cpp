#include<bits/stdc++.h>
using namespace std ;

void makePerm(int ind,int n,string &str,set<string > &res)
{
    
    
    res.insert(str);

    for(int i = ind;i<n;i++)
    {
            swap(str[i] , str[ind]);
            // cout<<"str : "<<str<<endl;
            makePerm(ind+1,n,str,res);
            swap(str[i],str[ind]);
        

    }
}

void solve(string str)
{
    set<string> res; 
    res.insert(str);
    makePerm(0,str.size(),str,res);
    cout<<res.size()<<endl;
    for(auto it : res)
    {
        cout<<it<<endl;
    }
    
}

int main()
{
    string str;
    cin>>str;
    solve(str);
    return 0;
}