#include<iostream>
#include<vector>

using namespace std;


void dfs(int node ,vector<int> &visited,vector<vector<int>> &adjList,vector<int> &ans)
{
    visited[node] = 1;
    ans.push_back(node);
    for(auto it : adjList[node])
    {
        if(!visited[it])
        {
            dfs(it,visited,adjList,ans);
        }
    }
}

int main()
{
    vector<vector<int>> num;
    // cout<<"hello";
    num.push_back({1,2});
    num.push_back({1,4});
    num.push_back({1,5});
    num.push_back({2,6});
    num.push_back({2,3});
    num.push_back({4,6});

    int n = 6;        // number of node
    vector<vector<int>> adjList(n+1);
    for(auto it : num)
    {
        adjList[it[0]].push_back({it[1]});
        adjList[it[1]].push_back({it[0]});
    }
    // cout<<adjList[1][0];
    cout<<"printing adjancey list : "<<endl;
    for(int i =0;i<adjList.size();i++)
    {
        cout<<i<<" : ";
        for(auto a :adjList[i])
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }

    vector<int> visited(n+1,0);
    // visited[1] = 1;
    vector<int > ans ;
    dfs(1,visited,adjList,ans);
    cout<<endl;
    cout <<" dfs traversal : ";
    for(auto it : ans)
    {
        cout << it<<" ";
    }
    return 0;
}