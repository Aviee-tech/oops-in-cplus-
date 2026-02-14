// calculator using protected specifiers
#include <iostream>
using namespace std;
class Data{
    protected:
        int a;
        int b;
};
class num: public Data {
    public:
        void setData(int x,int y);
        int sum();
        int diff();
        int mul();
        double div();
        int modulus();
};
void num::setData(int x,int y){
    a=x;
    b=y;
}
int num::sum(){
    return a+b;
}
int num::diff(){
    return a-b;
}
int num::mul(){
    return a*b;
}
double num::div(){
    return (double)a/b;
}
int num::modulus(){
    return a%b;
}
int main(){
    num n;
    n.setData(5,4);
    int addition=n.sum();
    int differences=n.diff();
    int multiplication=n.mul();
    float division=n.div();
    int modu=n.modulus();
    cout<<"The additon is :"<<addition<<endl;
    cout<<"The differencs is :"<<differences<<endl;
    cout<<"The multiplied value is :"<<multiplication<<endl;
    cout<<"The division value is :"<<division<<endl;
    cout<<"The remainder value is :"<<modu<<endl;
    return 0;
}