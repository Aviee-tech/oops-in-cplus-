#include<iostream>
using namespace std;
#include<string>
void english(char s){
    if(s=='z'){
        cout<<"a";
    }
    else{
        cout<<char(s + 1)<<endl;
    }
}
int main(){
    english('z');
    return 0;
}