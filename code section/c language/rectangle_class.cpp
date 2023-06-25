#include <bits/stdc++.h>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle(){length = breadth = 10 ;}
    rectangle(int l , int b);
    int area();
    int perimeter();
    int setlength(int ln);
    int getlength(){ return length ;}
    ~rectangle();
};
rectangle::rectangle(int l,int b){
    length = l;
    breadth = b;
}
int rectangle::area(){
    return length*breadth;
}
int rectangle::perimeter(){
    return 2*(length+breadth);
}
int rectangle::setlength(int ln){
    length = ln;
    return length;
}
rectangle::~rectangle(){

}
int main(){
    rectangle r;
    r=rectangle(10,20);
    cout<<"Area:"<<r.area();
    cout<<"Perimeter of rectangle:"<<r.perimeter();
    cout<<"Modified length:"<<r.setlength(22);
    cout<<"Final length:"<<r.getlength();
}

