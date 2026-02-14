#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        int marks;
    public:
        string Name;
        void SetMarks(int x);
        int display_Marks(){
            return marks;
        }
};
void Student::SetMarks(int x){
    if(x>0 &&x<=100){
        marks=x;
    }

}
int main(){
    Student s;
    s.Name="Avishek";
    s.SetMarks(87);
    cout<<"The name of the Student is "<<s.Name<<" "<<"and the marks is "<<s.display_Marks()<<endl;
}