#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    //number of rows and columns
    cin >> m >> n;
    vector<vector<int>> A(m,vector<int>(n,1));
    vector<vector<int>> B(m,vector<int>(n,0));
    vector<vector<int>> C(m,vector<int>(n,0));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> B[i][j];
            if(B[i][j]==0)
            {
                for(int k=0;k<m;k++)
                {
                    A[k][j]=0;
                }
                for(int k=0;k<n;k++)
                {
                    A[i][k]=0;
                }
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]==1)
            {
                for(int k=0;k<m;k++)
                {
                    C[k][j]=1;
                }
                for(int k=0;k<n;k++)
                {
                    C[i][k]=1;
                }
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(B[i][j]!=C[i][j])
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
