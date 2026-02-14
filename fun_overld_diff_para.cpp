//function overloading 
#include<iostream>
using namespace std;
void Add(int x,int y){
    cout<<x*y<<endl;
}                   //Function overloading with different no of parameters
void Add(int x,int y,int z){
    cout<<x*y*z;
}
int main(){
    Add(4,5);
    Add(3,4,2);
}