#include<iostream>
using namespace std;
int main(){
    int n[20],a,even=0,odd=0;
    cout<<"Enter the no. of numbers=";
    cin>>a;
    cout<<"Enter the numbers=";
    for (int i=0;i<a;i++){
        cin>>n[i];
    }
    for(int i=0;i<a;i++){
        if(n[i]%2==0){
            even=even+n[i];
        }
        else{
            odd=odd+n[i];
        }
    }
    cout<<"The sum of even numbers is:"<<even<<endl;
    cout<<"The sum of odd numbers is:"<<odd<<endl;
    return 0;
}