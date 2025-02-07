#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    if(n>=1 && n<=2000)
    {
        cout << (long long int)(n*(5+pow(n,2)))/6;
    }

    return 0;
}
