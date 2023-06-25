#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0)
    return 0;
    else
    return sum(n-1)+n;
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"The sum of first "<<n<<" natural number is "<<sum(n);
}