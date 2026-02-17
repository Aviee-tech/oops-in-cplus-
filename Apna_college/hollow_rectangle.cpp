#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        cout<<"*";
        if(i==1||i==2){
            cout<<"   ";
        }
        else{
            cout<<"***";
        }
        cout<<"*";
        cout<<endl;
    }

    return 0;
}