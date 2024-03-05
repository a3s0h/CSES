#include<bits/stdc++.h>
using namespace std;




int main()
{
    string str;
    cin>>str;
    int len = str.size();
    vector<int> vec(26);
    for(auto it : str)
    {
        vec[it-'A']++;
    }

    int oddCount =0 ;
    for(auto it : vec)
    {
        if(it%2==1)
        {
            oddCount++;
        }
    }

    if(len%2==0 && oddCount>0)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else if(len%2==1 && oddCount > 1)
    {
        cout<<"NO SOLUTION"<<endl;
        // return 0;
    }

    else{
        
        string res = "";
        string temp = "";
        for(int i =0;i<26;i++)
        {
            if(vec[i]%2==0)
            {
                // cout<<"here"<<endl;
                int cnt = vec[i]/2;
                for(int j =0;j<cnt ;j++)
                {
                    res += char('A'+i);
                }
            }
            else{
                int cnt1 = vec[i]/2;
                int cnt2 = vec[i]%2;
                for(int j =0;j<cnt1;j++)
                {
                    res += char('A'+i);
                }
                for(int j =0;j<cnt2;j++)
                {
                    temp += char('A'+i);
                }
            }
        }
        cout<<res<<temp;
        reverse(res.begin(),res.end());
        cout<<res<<endl;
    }
    

    return 0;
}