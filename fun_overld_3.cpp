// function overloading based on no. of parameters and different types of parameters
#include<iostream>
#include<iomanip>
using namespace std;
void add (int x,int y ){
    cout<<x+y<<endl;
}
void add (double x,double y){
    cout<<fixed<<setprecision(2)<<x+y<<endl;
}
void add (int x,int y,float z){
    cout<<fixed<<setprecision(2)<<x+y+z<<endl;
}
int main(){
    add(4,5);
    add(4.0,5.0);
    add(4,5,6.0);
    return 0;
}