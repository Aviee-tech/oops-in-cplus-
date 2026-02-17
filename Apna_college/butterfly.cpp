#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=6;k>(2*i);k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int x=4;x>0;x--){
            for(int j=0;j<x;j++){
                cout<<"*";
            }
            for(int k=6;k>2*(x-1);k--){
                cout<<" ";
            }
            for(int j=0;j<x;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    return 0;
}