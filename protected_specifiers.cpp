#include<iostream>
using namespace std;
class Data{
    protected:
        int a;
        int b;
};
class num : public Data{
    public:
    void setData(int x,int y);
    int sum();
};
void num::setData(int x,int y){
    a=x;
    b=y;
}
int num:: sum(){
    return a+b;
}
int main(){
    num n1;
    n1.setData(2,5);
    int value=n1.sum();
    cout<<value<<endl;
    return 0;
}