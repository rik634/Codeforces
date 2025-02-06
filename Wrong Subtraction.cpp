#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    if((n>=2 && n<=1e9) && (k>=1 && k<=50))
    {
        while(k>0)
        {
            int rem = n%10;
            if(rem!=0)
            {
                n--;
            }
            else
            {
                n=n/10;
            }
            k--;
        }
        cout << n;
    }
    return 0;
}
