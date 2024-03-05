#include<bits/stdc++.h>
using namespace std;

void solve(string str)
{
    int max_cnt = INT_MIN;
    int cnt = 1;
    int i =0,j=1;
    int n =str.size();
    while(j<n)
    {
        if(str[j-1] == str[j])
        {
            cnt++;j++;
        }
        else{
            max_cnt = max(cnt , max_cnt);
            cnt = 1;
            i = j;
            j++;
        }
    }
    cout<<max(max_cnt,cnt)<<endl;
}

int  main()
{
    string str;
    cin>>str;
    solve(str);
    return 0;
}