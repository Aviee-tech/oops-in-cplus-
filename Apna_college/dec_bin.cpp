#include<iostream>
using namespace std;
void decToBin(int decNum){
    int pow=1;
    int bin=0;
    while(decNum>0){
        int rem=decNum%2;
        bin=bin+rem*pow;
        decNum=decNum/2;
        pow=pow*10;
    }
    cout<<bin<<endl;

}
int main(){
    decToBin(4);
    return 0;
}