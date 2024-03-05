#include<bits/stdc++.h>
using namespace std;




int main()
{
    int n ;
    cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        
        if(x<y)     // always have x greater 
        swap(x,y);

        if(x > 2*y)cout<<"NO"<<endl;
        else{
            if((x+y)%3==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}