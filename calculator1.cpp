// calculator using private modifiers
#include<iostream>
using namespace std;
class Data{
    private:
        int a;
        int b;
    public:
        void setData(int x,int y);
        int sum();
        int diff();
        int mul();
        double div();
        int modulus();
};
void Data:: setData(int x,int y){
    a=x;
    b=y;
}
int Data::sum(){
    return a+b;
}
int Data::diff(){
    return a-b;
}
int Data::mul(){
    return a*b;
}
double Data::div(){
    return (double)a/b;
}
int Data::modulus(){
    return a%b;
}
int main(){
    Data d;
    int x,y;
    cout<<"Enter the first value=";
    cin>>x;
    cout<<"Enter the second value=";
    cin>>y;
    d.setData(x,y);
    cout<<"The addition is "<<d.sum()<<endl;
    cout<<"The differences is "<<d.diff()<<endl;
    cout<<"The multiplication is "<<d.mul()<<endl;
    cout<<"The division value is "<<d.div()<<endl;
    cout<<"The remainder value is "<<d.modulus()<<endl;
    return 0;
}