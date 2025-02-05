#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    if((n>=1 && n<=1000) && (k>=1 && k<=1000) && (l>=1 && l<=1000) && (c>=1 && c<=1000) && (d>=1 && d<=1000) && (p>=1 && p<=1000)
     && (nl>=1 && nl<=1000) && (np>=1 && np<=1000))
    {
        int num = min((k*l)/nl,min(c*d,p/(np)));
        cout << num/n;
    }
    return 0;
}
