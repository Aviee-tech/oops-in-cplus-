#include<iostream>
#include<string>
using namespace std;
class Details{
    public:
        string Name;
        string dob;
        string PhoneNumber;   
};
class protect{
    protected:
        string AccountNumber;
        double balance;
};
class num:public protect {

    double draw;
    double depo;
    public:
        void setData(string acc,double bal,double w,double d);
        double withdraw();
        double depoist();

};
void num::setData(string acc,double bal,double w,double d){
    AccountNumber=acc;
    balance=bal;
    draw=w;
    depo=d;
}
double num::withdraw(){
    if(balance < draw){
        cout<<"Insufficent Balance"<<endl;
        return balance;
    }
    else{
        balance-=draw;
        cout<<"successfully withdrawned :"<<draw<<endl;
        return balance;
    }
}
double num::depoist(){
    balance+=depo;
    cout<<"your total balance is :"<<balance<<endl;
    return balance;
}
int main(){
    Details d;
    
    cout<<"Enter the Name of the customer=";
    cin>>d.Name;
    cout<<"Enter the dob=";
    cin>>d.dob;
    cout<<"Entr the phonenumber=";
    cin>>d.PhoneNumber;
    num n;
    n.setData("102040543433",13000,8000,5000);
    n.withdraw();
    n.depoist();
    return 0;
}