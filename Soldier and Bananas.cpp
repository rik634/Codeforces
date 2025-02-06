#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,w;
    cin >> k >> n >> w;
    if((k>=1) && (w<=1000) && (n>=0 && n<=1e9))
    {
        int req = ((w*(w+1))/2) * k;
        if(n>=req)
        {
            cout << 0;
        }
        else
        {
            cout << req-n;
        }
    }
    return 0;
}
