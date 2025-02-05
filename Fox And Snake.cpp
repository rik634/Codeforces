#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<char>> v(n,vector<char>(m,'.'));
    for(int i=0;i<n;i+=2)
    {
        for(int j=0;j<m;j++)
        {
            v[i][j]='#';
        }
    }
    for(int i=1;i<n;i+=2)
    {
        v[i][m-1]='#';
        i+=2;
        if(i<n)
        {
            v[i][0]='#';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
