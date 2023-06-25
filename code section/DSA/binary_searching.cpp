#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << endl;
        cin >> array[i];
    }
    int l=0,h=n-1,m,key;
    cout<<"Enter the number you want to search in array"<<endl;
    cin>>key;
    while(l<=h)
    {   m=l+h/2;
        if(key==array[m])
        {
            cout<<"The number is matched at position "<<m<<endl;
            return 0;
        }
        else if(key>array[m])
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }    
    }
    cout<<"Not found"<<endl;
    return 0;
}