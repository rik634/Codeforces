#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
     string str;
     cin >> str;
     int n = str.length();
     if(n<=100 && n>0)
     {
         unordered_set<char> s; 
         for(int i=0;i<n;i++)
         {
             s.insert(str[i]);
         }
         
         if(s.size()%2!=0) // male
         {
             cout << "IGNORE HIM!";
         }
         else
         {
             cout << "CHAT WITH HER!";
         }
     }
    return 0;
}
