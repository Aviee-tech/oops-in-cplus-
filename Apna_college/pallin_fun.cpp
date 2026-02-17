//check whether the number is pallindrome or not 
//using function
#include<iostream>
using namespace std;
int pallindrome(int x){
    int rem,sum=0;
    while(x>0){
        rem=x%10;
        sum=sum*10+rem;
        x=x/10;
    }
    return sum;
}
int main(){
    int a,copy;
    cout<<"Enter the numbers=";
    cin>>a;
    copy=a;
    if(a<0){
        cout<<"It is not pallindrome.";
    }
    int d=pallindrome(a);
    if(copy==d){
        cout<<copy<<" is a pallindrome number.";
    }
    else{
        cout<<copy<<" is not a pallindrome number.";
    }
}