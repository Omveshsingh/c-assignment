#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter first integer: ";
    cin>>n1;
    cout<<"Enter second integer: ";
    cin>>n2;
    cout<<"Addition: "<<n1+n2<<endl;
    if(n1>n2){
        cout<<"Subtraction: "<<n1-n2<<endl;
    }
    else{
        cout<<"Subtraction: "<<n2-n1<<endl;
    }
    cout<<"Multiplication: "<<n1*n2<<endl;
    if(n2==0){
        cout<<"Division not possible"<<endl;
        cout<<"Modulus not possible"<<endl;
    }
    else{
        cout<<"Division: "<<float(n1)/float(n2)<<endl;
        cout<<"Modulus: "<<n1%n2<<endl;
    }
    return 0;
}