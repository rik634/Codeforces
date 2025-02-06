#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool mpComp(const pair<int,int>& a, const pair<int,int>& b)
{
    return a.first<b.first;
}
int main()
{
    int n,k;
    cin >> n >> k;
    if((n>=1 && n<=100) && (k>=0 && k<=10000))
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int x;
        int count=0;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            pq.push({x,i+1});
        }
        while(k>0)
        {
            int day = pq.top().first;
            int index = pq.top().second;
            pq.pop();
            if(day<=k)
            {
                k-=day;
                count++;
                s.insert(index);
            }
            else
            {
                break;
            }
        }
        if(count==0)
        {
            cout << 0;
        }
        else
        {
            cout << s.size() << endl;
            for(auto it: s)
            {
                cout << it << " ";
            }
        }
    }
    return 0;
}
