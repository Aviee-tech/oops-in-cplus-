#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number=";
    cin>>n;
    int copy=n,rem,cube,sum=0;
    while(n>0){
         rem=n%10;
         cube=rem*rem*rem;
         sum=sum+cube;
         n=n/10;
    }
    if(copy==sum){
        cout<< copy << " is a armstrong number.";
    }
    else{
        cout<<copy<<" is not a armstrong number.";
    }
    return 0;
}