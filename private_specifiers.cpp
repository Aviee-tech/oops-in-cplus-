#include<iostream>
using namespace std;
class Data{
    private:
        int a;
        int b;
    public:
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
    Data obj1;
    obj1.setData(10,20);
    cout<<"The sum is ="<<obj1.sum()<<endl;
    return 0;
}