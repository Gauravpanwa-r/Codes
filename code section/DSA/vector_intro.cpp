#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> g1;
    for(auto i=0;i<10;i++)
    {
        g1.push_back(i+1);
    }
    for(auto i=g1.begin();i!=g1.end();i++)
    {
        cout<<*i<<" ";
    }
}