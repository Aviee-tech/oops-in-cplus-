#include<iostream>
using namespace std;
class Data{
    public:
        int a;
        int b;
        void setData(int x,int y);
        void Display();
};
void Data::setData(int x,int y){
    a=x;
    b=y;
    
}
void Data::Display(){
    cout<<"value of a="<<a<<endl;
    cout<<"value of b="<<b<<endl;
}
int  main(){
    Data obj1;
    obj1.setData(100,200);
    obj1.Display();
    return 0;
}