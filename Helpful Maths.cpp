#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string r = s;
    r.erase(remove(r.begin(),r.end(),'+'),r.end());
    sort(r.begin(),r.end());
    string res;
    for(int i=0;i<r.length()-1;i++)
    {
        res+=r[i];
        res+='+';
    }
    res+=r[r.length()-1];
    cout << res;
}
