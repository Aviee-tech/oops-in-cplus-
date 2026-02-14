#include<iostream>
using namespace std;
class Data{
    public:
        int a;
        int b;
        void setData(int x,int y);
        int sum();
};
void Data::setData(int x,int y){
    a=x;
    b=y;
}
int Data::sum(){
    return a+b;

}
int main(){
    Data d1,d2;
    d1.setData(10,20);
    cout<<"First Sum="<<d1.sum()<<endl;
    d2.a=5;
    d2.b=15;
    cout<<"Second Sum="<<d2.sum()<<endl;
    return 0;
}