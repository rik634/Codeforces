#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum=0;
    int mx=0;
    int a,b;
    if(n>=2 && n<=1000)
    {
        for(int i=0;i<n;i++)
        {
            cin >> a >> b;
            if((a>=0 && a<=1000) && (b>=0 && b<=1000))
            {
                sum+=(b-a);
                mx = max(mx,sum);
            }
        }
        cout << mx;
    }
    return 0;
}
