#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    map<int,pair<int,vector<int>>> mp;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        int count=0;
        vector<int> v;
        int size=0;
        int m = n;
        while(m>0)
        {
            size++;
            m=m/10;
        }
        if(n%(int)pow(10,size-1)==0)
        {
            count=1;
            v.push_back(n);
        }
        else
        {
            int r = n;
            int f=1;
            while(r>0)
            {
                count++;
                if(r%(int)pow(10,size-1)==0)
                {
                    v.push_back(r*f);
                    break;
                }
                int rem = r % 10;
                if(rem==0)
                {
                    
                    count--;
                    f = f*10;
                r = r/10;
                continue;
                }
                v.push_back(rem*f);
                f = f*10;
                r = r/10;
            }
        }
        mp.insert({i,{count,v}});
    }
    for(auto it:mp)
    {
        cout << it.second.first << endl;
        for(auto x:it.second.second)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
