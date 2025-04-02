#include <iostream>
# include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        
        if(s.empty())
        {
            s.push(str[i]);
        }
        else
        {
            char ch = s.top();
            if(ch==str[i])
            {
                s.pop();
            }
            else
            {
                s.push(str[i]);
            }
        }
    }
    if(s.size()==0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
