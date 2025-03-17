#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    int x;
    int even=0,odd=0;
    vector<int> v;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        even=0;
        odd=0;
        for(int j=0;j<n;j++)
        {
            cin >> x;
            if(x%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd%2!=0)
        {
            v.push_back(1);
        }
        else
        {
            if(odd==0)
            {
                v.push_back(0);
            }
            else if(odd!=0 && even!=0)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
    }
    for(auto it:v)
    {
        if(it==1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
