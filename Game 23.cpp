#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dfs(int n, int m, int count)
{
    if(n>m)
    {
        return -1;
    }
    else if(n==m)
    {
        return count;
    }
    else
    {
        int n1 = dfs(2*n,m,count+1);
        int n2 = dfs(3*n,m,count+1);
        if(n1>0)
        {
            return n1;
        }
        else if(n2>0)
        {
            return n2;
        }
        else
        {
            return -1;
        }
    }
    return 0;
    
}
int main()
{
    int n,m;
    cin >> n >> m;
    if((n>=1 && n<=5e8) && (m>=1 && m<=5e8) && (m>=n))
    {
        int count=0;
        cout << dfs(n,m,count);
    }
    return 0;
}
