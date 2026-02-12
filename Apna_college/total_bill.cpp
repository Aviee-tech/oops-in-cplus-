#include<iostream>
using namespace std;
int main(){
    float pencil,pen,eraser;
    cout<<"Enter the cost of pencil=";
    cin>>pencil;
    cout<<"Enter the cost of pen=";
    cin>>pen;
    cout<<"Enter the cost of eraser=";
    cin>>eraser;
    float sum=pencil+pen+eraser;
    float gst=(18.0/100)*sum;
    float bill =sum+gst;
    cout<<"The total cost after gst="<<bill<<endl;
}