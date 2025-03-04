#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t1;
    cin >> t1;
    string t2;
    cin >> t2;
    int h1 = (t1[0]-'0')*10 + (t1[1]-'0');
    int m1 = (t1[3]-'0')*10+(t1[4]-'0');
    int h2 = (t2[0]-'0')*10 + (t2[1]-'0');
    int m2 = (t2[3]-'0')*10+(t2[4]-'0');
    int T = ((h2-h1)*60 + (m2-m1))/2;
    h1 = h1 + (T/60);
    m1 = m1 + (T%60);
    
    if(m1>=60)
    {
        m1 = m1%60;
        h1++;
    }
    string sh1= (h1/10)==0 ? '0'+to_string(h1) : to_string(h1);
     string sm1= (m1/10)==0 ? '0'+to_string(m1) : to_string(m1);
    cout << sh1 +":"+ sm1;
    
    return 0;
}
