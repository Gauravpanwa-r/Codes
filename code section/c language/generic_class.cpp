#include <bits/stdc++.h>
using namespace std;
template <class t>
class arithmatic{
    private:
    t a;
    t b;
    public:
    arithmatic(t a,t b);
    t add();
    t sub();
};
template <class t>
arithmatic<t>::arithmatic(t a,t b){
    this->a=a;
    this->b=b;
}
template <class t>
t arithmatic<t>::add(){
    t c;
    c= a+b;
    return c;
}
template<class t>
t arithmatic<t>::sub(){
    t c;
    c=a-b;
    return c;
}
int main(){
    arithmatic<int> ar(50,30);
    cout<<"Addition :"<<ar.add()<<endl;
    arithmatic<float> ar1(220.3652,777.3673);
    cout<<"Substration :"<<ar1.sub()<<endl;
    arithmatic<double> ar2(20.386474539543,77.346937256346);
    cout<<"Substration :"<<ar2.sub()<<endl;

}