#include<iostream>
using namespace std;
int decToBin(int x){
    int bin=0;
    int pow=1;
    while(x>0){
        int rem=x%10;
        bin=bin+rem*pow;
        pow=pow*10;
        x=x/2;

    }
    return bin;
}
void conversion(int a,int b){
    int bin1=decToBin(a);
    int bin2=decToBin(b);
    int carry=0;
    int sum=0;
    int pow=1;
    while(bin1>0||bin2>0||carry){
        int rem1=bin1%10;
        int rem2=bin2%10;

        int s=rem1+rem2+carry;
        sum=sum+(s%2)*pow;
        carry=s/2;
        pow=pow*10;
        bin1=bin1/10;
        bin2=bin2/10;



    }
    cout<<"The binary addition is :"<<sum<<endl;;
}
int main(){
    conversion(63,22);
    return 0;
}