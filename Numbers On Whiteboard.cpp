#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    int x;
    if(t>=1 && t<=1000)
    {
        vector<pair<int,vector<pair<int,int>>>> v;
        for(int i=0;i<t;i++)
        {
            cin >> n;
            priority_queue<int> q;
            if(n>=2 && n<=200000)
            {
                vector<pair<int,int>> res;
                for(int j=1;j<=n;j++)
                {
                    
                    q.push(j);
                }
                int index=1;
                int a,b;
                while(index!=n)
                {
                    a=q.top();
                    q.pop();
                    b=q.top();
                    q.pop();
                    index++;
                    q.push(((a+b)/2) + (((a+b)%2)!=0));
                    res.push_back({a,b});
                }
                v.push_back({q.top(),res});
            }
            
        }
        for(auto it:v)
        {
            cout << it.first << endl;
            for(auto it1:it.second)
            {
                cout << it1.first << " " << it1.second << endl;
            }
        }
    }
    return 0;
}
