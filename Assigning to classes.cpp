
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    int x;
    
    if(t>=1 && t<=10000)
    {
        vector<int> v;
        for(int i=0;i<t;i++)
        {
            cin >> n;
        if(n>=1 && n<=100000)
        {
            priority_queue<int> q;
            for(int j=0;j<2*n;j++)
            {
                cin >> x;
                q.push(x);
            }
            int index=1;
            while(index!=n)
            {
                q.pop();
                index++;
            }
            int n1=q.top();
            q.pop();
            
            int n2=q.top();
            v.push_back(abs(n1-n2));
        }
        }
        for(auto it:v)
        {
            cout << it<< endl;
        }
    }

    return 0;
}
