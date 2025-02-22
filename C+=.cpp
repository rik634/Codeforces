#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long T;
    cin >> T;
    long long a,b,n;
    vector<long long> v;
    long long count;
    if(T>=1 && T<=100)
    {
         for(int i=0;i<T;i++)
        {
            cin >> a >> b >> n;
            if((a>=1 && a<=1e9) && (b>=1 & b<=1e9) && (n>=1 && n<=1e9) && (n>=a && n>=b))
            {
                count=0;
               while(a<=n && b<=n)
               {
                  if(a<b)
                {
                   a=a+b;
               }
               else 
               {
                   b=b+a;
               }
                count++;
            }
            v.push_back(count);
            }
        }
        for(auto it:v)
        {
           cout << it<< endl;
        }

    }
    return 0;
}
