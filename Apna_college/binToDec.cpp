#include<iostream>
using namespace std;
void binToDec(int binNum){
    int copy=binNum;
    int decNum=0;
    int pow=1;
    while(copy>0){
        int lastDig=copy%10;
        decNum+=lastDig*pow;
        pow=pow*2;
        copy=copy/10;
    }
    cout<<"Decimal number is: "<<decNum<<endl;
}
int main(){
    binToDec(1010);
    return 0;
}