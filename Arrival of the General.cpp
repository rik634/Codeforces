#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int x;
    int minIndex,maxIndex;
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x<=mn)
        {
            mn=x;
            minIndex=i;
        }
        if(x>mx)
        {
            mx=x;
            maxIndex=i;
        }
    }
    if(maxIndex<minIndex)
    {
        cout << n-1-minIndex+maxIndex;
    }
    else if(maxIndex>minIndex)
    {
        cout << n-2-minIndex+maxIndex;
    }
    
    
    return 0;
}
