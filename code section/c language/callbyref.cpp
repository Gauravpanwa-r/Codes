#include <bits/stdc++.h>
using namespace std;
void swap(int &x,int &y)
{
    int temp = x ;
    x = y;
    y = temp;
}
int main()
{
    int a,b;
    cout<<"Enter number a and b:";
    cin>>a>>b;
    swap(a,b);
    cout<<"a= "<<a<<" b="<<b;
}