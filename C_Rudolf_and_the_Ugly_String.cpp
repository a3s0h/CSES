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
        string str;
        cin>>str;

        /* actual logic */
        if(n<3)
        {
            cout<<0<<endl;
        }
        else{
            int i = 2;
            set<string> st;
            st.insert("map");
            st.insert("pie");
            int res = 0;
            string temp = str.substr(0,3);
            while(i<n)
            {
                if(st.find(temp)!=st.end())
                {
                    int k = i+1;
                    char ch = temp[2];
                    while(k<n && str[k] == ch)
                    {
                        k++;
                    }
                    res += 1;
                    i=k-1;
                }
                if(i < n - 1) {
                    temp.erase(temp.begin());
                    i++;
                    temp.push_back(str[i]);
                } else {
                    break;
                }
            }

            cout<<res<<endl;

        }


    }

    return 0;
}
