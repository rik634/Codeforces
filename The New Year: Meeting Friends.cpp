#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3;
    cin >> x1 >> x2 >> x3;
    int mn=INT_MAX;
    int l = min(x1,min(x2,x3));
    int r = max(x1,max(x2,x3));
    int index;
    for(int i=l;i<=r;i++)
    {
        int d = abs(i-x1)+abs(i-x2)+abs(i-x3);
        if(d<mn)
        {
            index=i;
            mn=d;
        }
    }
    cout << mn;
    return 0;
}
