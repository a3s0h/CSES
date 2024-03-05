#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        int cnt_a = 0,cnt_b = 0;
        for(auto it : str)
        {
            if(it =='A')cnt_a++;
            else cnt_b++;
        }

        if(cnt_a >= cnt_b)
            cout<<"A"<<endl;
        else cout<<"B"<<endl;
        
    }
    return 0;
}