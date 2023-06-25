#include <bits/stdc++.h>
using namespace std;
double e(int x,int n)
{
    double static p=1,f=1,r;
    if(n==0)
    return 1;
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return (r+p/f);
}
int main()
{
    int x,n;
    cout<<"Enter x and n:";
    cin>>x>>n;
    cout<<e(x,n);
}