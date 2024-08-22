//Q1.
#include<iomanip>
#include<string>
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3,max;
    cout<<"Enter the first number: "<<endl;
    cin>>n1;
    cout<<"Enter the second number: "<<endl;
    cin>>n2;
    cout<<"Enter the third number: "<<endl;
    cin>>n3;
    if((n1>n2)&&(n1>n3)){
        cout<<"The largest number is: "<<n1<<endl;
    }
    else if((n2>n1)&&(n2>n3)){
        cout<<"The largest number is: "<<n2<<endl;
    }
    else{
        cout<<"The largest number is: "<<n3<<endl;
    }
    return 0;
}