
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int x;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x%2==0)
        {
            v.push_back(x/2);
        }
        else
        {
            if(flag==0)
            {
                v.push_back(ceil((double)x/2));
                flag=1;
            }
            else
            {
                v.push_back(floor((double)x/2));
                flag=0;
            }
        }
    }
    for(auto it: v)
    {
        cout << it << endl;
    }
    return 0;
}
