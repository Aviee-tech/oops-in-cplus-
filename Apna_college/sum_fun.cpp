//sum of digits using function
#include<iostream>
using namespace std;
void sum(int x){
    int rem,add=0;
    while(x!=0){
        rem=x%10;
        add+=rem;
        x=x/10;
    }
    cout<<"The sum of digits is="<<add<<endl;

}
int main(){
    sum(-121);
    return 0;
}