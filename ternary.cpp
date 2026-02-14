#include<iostream>
using namespace std;
int main(){
    int n,i,a[10],largest;
    cout<<"Enter the number of terms=";
    cin>>n;
    cout<<"Enter the terms=";
    for (i=0;i<n;i++){
        cin>>a[i];
    }
    for (i=0;i<n;i++){
        largest=((a[i]>a[i++])? a[i]:a[i++]);
    }
    cout<<"largest is "<<largest;
}