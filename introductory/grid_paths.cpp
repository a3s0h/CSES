#include<bits/stdc++.h>
using namespace std;

// const int MOD = 1e9 + 7;
const int n = 7;
int reserved[49];
bool visited[n][n];
string path ;
const int total_steps = 48;



void solve(int row ,int col,int &ans , int &steps)
{
    if(row == n && col == 0)   // that is at lower  left cell
    {
        if(steps == total_steps)
            ans++;
        return;
    }

    if(row + 1 == n || (visited[row-1][col] && visited[row+1][col]) && col-1 >= 0&& col+1 < n && !visited[row][col-1] && !visited[row][col+1])
        return ;
    if(col + 1 == n || (visited[row][col-1] && visited[row][col+1]) && row-1 >= 0 && row+1 < n && !visited[row-1][col] && !visited[row+1][col])
        return ;
    if(row  == 0 || (visited[row-1][col] && visited[row+1][col]) && col-1 >= 0&& col+1 < n && !visited[row][col-1] && !visited[row][col+1])
        return ;
    if(col == 0 || (visited[row][col+1] && visited[row][col-1]) && row-1 >= 0 && row+1 < n && !visited[row-1][col] && !visited[row+1][col])
        return ;

    visited[row][col] = true;

    if(path[steps] != '?')
    {
        if(path[steps] == 'U')
        {
            if(row-1 >=0)
            {
                if(!visited[row-1][col])
                {
                    steps++;
                    solve(row-1,col,ans,steps);
                    steps--;
                }
            }
        }
        else if(path[steps] == 'R')
        {
            if(col+1 < n>)
            {
                if(!visited[row][col+1])
                {
                    steps++;
                    solve(row,col+1,ans,steps);
                    steps--;
                }
            }
        }
        else if(path[steps] == 'D')
        {
            if(row+1 < n>)
            {
                if(!visited[row+1][col])
                {
                    steps++;
                    solve(row+1,col,ans,steps);
                    steps--;
                }
            }
        }
        else if(path[steps] == 'L')
        {
            if(col-1 >=0)
            {
                if(!visited[row][col-1])
                {
                    steps++;
                    solve(row,col-1,ans,steps);
                    steps--;
                }
            }
        }
    }
    else
    {
        if(row +1 < n)
        {
            if(!visited[row+1][col])
            {
                steps++;
                solve(row+1,col,ans,steps);
                steps--;

            }
        }
        if(row - 1 >= 0)
        {
            if(!visited[row-1][col])
            {
                steps++;
                solve(row-1,col,ans,steps);
                steps--;

            }
        }
        if(col + 1 < n)
        {
            if(!visited[row][col+1])
            {
                steps++;
                solve(row,col+1,ans,steps);
                steps--;

            }
        }
        if(col- 1 >= 0)
        {
            if(!visited[row][col-1])
            {
                steps++;
                solve(row,col-1,ans,steps);
                steps--;

            }
        }
    }
    visited[row][col] = false;
}


int main() {
    string path;
    cin >> path;
   
   for(int i =0;i<path.size();i++)
   {
        if(path[i] == '?')
            reserved[i] = -1;
        else if(path[i] =='U')
            reserved[i] = 0;
        else if (path[i] =='R')
            reserved[i] = '1';
        else if(path[i] == 'D')
            reserved[i] = 2;
        else if(path[i] == 'L')
            reserved[i] = 3;
   }

   int ans =0 ;
   int steps= 0 ;
   solve(0,0,ans,steps);
   cout<<ans<<endl;

    return 0;
}
