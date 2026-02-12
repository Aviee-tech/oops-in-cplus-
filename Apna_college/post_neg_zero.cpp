#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number=";
    cin>>n;
    if(n>0){
        cout<<n<<" is a postive number.";
    }
    else if(n<0){
        cout<<n<<" is a negative number.";
    }
    else{
        cout<<"It is  a zero.";
    }
    return 0;
}