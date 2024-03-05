#include<bits/stdc++.h>
using namespace std;

int maxSub(string str)
{
    int i =0;
    int cnt = INT_MIN;
    while(i < str.size())
    {
        int j = i;
        int cntMax = 0;
        while(j < str.size() && str[i] == str[j])
        {
            j++;
            cntMax ++;
        }
        cnt = max(cntMax, cnt);
        i = j;
    }
    return cnt;
}

int main()
{
    string str;
    cin>>str;

    int maxi = maxSub(str);
    cout<<maxi<<endl;
    return 0;
}