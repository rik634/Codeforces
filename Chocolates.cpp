#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if(n>=1 && n<=200000)
    {
        vector<int> s;
        long long int x;
        for(long long int i=0;i<n;i++)
        {
            cin >> x;
            s.push_back(x);
        }
        long long int mxL=INT_MAX;
        long long int sum=0;
        for(long long int i=n-1;i>=0;i--)
        {
            long long int top=s[i];
            if(mxL==0)
            {
                continue;
            }
            if(top<mxL)
            {
                sum+=top;
                mxL=top;
            }
            else
            {
                if((mxL-1)<0)
                {
                    mxL=0;
                }
                sum+=(mxL-1);
                mxL=mxL-1;
            }
        }
        cout << sum;
    }
    return 0;
}
