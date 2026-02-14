#include<iostream>
using namespace std;
class Data{
    private:
        int x;
    public:
        Data(int a){//Constructor same name as class
            x=a;//same name as class 
            // automatically called whenever class is called
            //does't have return type neither void 
            // provides flexibility while assigning the value to data members
            cout<<"Constructor evoked"<<endl;

        }
        ~Data(){//also same name as class but start with ~(tild) symbol
            //to free the memory allocation
            cout<<"Destructor evoked"<<endl;
        }
};
int main(){
    Data d(100);
    cout<<"main function evoked"<<endl;
}