#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
        string reg_No;
        string Model_Name;
        void Display(){
            cout<<"The registration number of the vehicle is:"<<reg_No<<endl;
            cout<<"The Model name is :"<<Model_Name<<endl;
        }

};
int main(){
    Car c;
    c.reg_No="CA1302";
    c.Model_Name="Hyundai";
    c.Display();

}