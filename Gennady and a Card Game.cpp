#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t;
    cin >> t;
    string x;
    bool flag=false;
    for(int i=0;i<5;i++)
    {
        cin >> x;
        if(t[0]==x[0] || t[1]==x[1])
        {
            flag=true;
        }
    }
    if(flag==true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
