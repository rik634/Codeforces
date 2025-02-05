#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> dx={1,-1,0,0};
    vector<int> dy={0,0,1,-1};
    vector<vector<int>> matrix(5,vector<int>(5,-1));
    int x;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin >> x;
            matrix[i][j]=x;
        }
        cout << "\n";
    }
    queue<pair<int,int>> q;
    q.push({2,2});
    vector<vector<bool>> vis(5,vector<bool>(5,false));
    vis[2][2]=true;
    int h=-1;
    while(!q.empty())
    {
        int size = q.size();
        h++;
        for(int j=0;j<size;j++)
        {
            auto it=q.front();
            q.pop();
            int sr = it.first;
            int sc = it.second;
            if(matrix[sr][sc]==1)
           {
              cout<<h;
           }
            for(int i=0;i<4;i++)
            {
                int r = sr+dx[i];
                int c = sc+dy[i];
                if(r>=0 && r<5 && c>=0 && c<5 && vis[r][c]==false)
                {
                    vis[r][c]=true;
                   q.push({r,c});
                }
            }
        }
    }

    return 0;
}
