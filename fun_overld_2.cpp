// Function overloading with different Datatype overloading
#include <iostream>
#include<iomanip>
using namespace std;
void Add(int x,int y,double z){
    cout<<fixed<< setprecision(1)<<x+y+z<<endl;
}
void Add(int x,int y ,int z){
    cout<<x+y+z<<endl;
}
int main(){
    Add(4,5,6.00);
    Add(3,4,5);
    return 0;
}