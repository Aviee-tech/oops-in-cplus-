//largest number from 3 numbers using function
#include<iostream>
using namespace std;
void largest(int arr[]){
    int largest=arr[0];
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(arr[i]<arr[j]){
                largest=arr[j];
            }

        }
    }
    cout<<"The largest among the three numbers is: "<<largest<<endl;

}
int main(){
    int arr[]={10,20,5};
    largest(arr);
    return 0;
}