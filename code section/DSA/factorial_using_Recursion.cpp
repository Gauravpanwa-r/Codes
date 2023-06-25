#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0)
    return 1;
    else
    return factorial(n-1)*n;
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n);
}