#include<iostream>
using namespace std;
class A{
    public:
        static int x;//it belongs to the class not to the object and the scope of it is throughout the class
        //Although it is declared in class but it's value is always assigned outside the class
        A(){
            x+=1;
        }
};
int A::x=10;
int main(){
    A obj1,obj2,obj3;
    cout<<A::x<<endl;
}