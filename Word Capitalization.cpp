#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    if(n>0 && n<=1000)
    {
        str[0]=toupper(str[0]);
        cout << str;
    }
    return 0;
}
