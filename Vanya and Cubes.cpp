#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum=0,h=0;
    while(n>(sum+h))
    {
        h++;
        sum+=h;
        n-=sum;
    }
    cout << h << endl;
    return 0;
}
