#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> mp;
    mp.insert({"Tetrahedron",4});
    mp.insert({"Cube",6});
    mp.insert({"Octahedron",8});
    mp.insert({"Dodecahedron",12});
    mp.insert({"Icosahedron",20});
    int n;
    cin >> n;
    string str;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> str;
        sum+=mp[str];
    }
    cout << sum;
    
    return 0;
}
