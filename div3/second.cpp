#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        vector<int> container;
        for(int i =0;i<n;i++)
        {
            int x ;
            cin>>x;
            container.push_back(x);
        }

        vector<int> prefix;
        prefix.push_back(container[0]);
        for(int i =1 ;i<n;i++)
        {
            prefix.push_back(prefix[i-1] + container[i]);
        }

        bool isPossible = true;

        int totalSum = prefix[n-1];
        int singal_cap = totalSum / n;
        if(container[0] < singal_cap){isPossible = false;}
        
            for(int i =0;i<n;i++)
            {
                
                if(i!=0 && container[i] < singal_cap)
                {
                    int prev = prefix[i-1];
                    if(prev - (singal_cap-container[i]) < i * singal_cap)
                    {
                        // cout<<"huh"<<i<<endl;
                        isPossible = false;
                        break;
                    }
                }
            }

        
        if(isPossible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}