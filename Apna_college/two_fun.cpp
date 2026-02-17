#include<iostream>
using namespace std;
void calc(int x,int y){
    int sum=0;
    sum=((x*x)+(y*y)+(2*(x*y)));
    cout<<"The calculation of "<< x <<" and "<< y<< " is:  "<<sum<<endl;

}
int main(){
    calc(2,3);
    return 0;
}