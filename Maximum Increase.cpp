#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n>=1 && n<=1e5)
    {
        vector<int> v(n,0);
        int lmx=0;
        int clen=0;
        int mxl=0;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]>lmx)
            {
                clen++;
                lmx=v[i];
                mxl = max(mxl,clen);
            }
            else
            {
                lmx=v[i];
                clen=1;
                mxl=max(mxl,clen);
            }
        }
        cout << mxl;
        
    }
    
    return 0;
}
