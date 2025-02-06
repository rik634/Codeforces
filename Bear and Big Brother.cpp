#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
   int count=0;
    if((a>=1 && a<=10) && (b>=1 && b<=10) && (a<=b))
    {
        while(a<=b)
       {
           count++;
           a = 3*a;
           b=2*b;
        }
        cout << count;
    }
    return 0;
}
