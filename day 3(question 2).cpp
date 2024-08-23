//Q2.
#include<iomanip>
#include<string>
#include<iostream>
using namespace std;
int main(){
    int input;
    int fact=1;
    cout<<"Enter a number: "<<endl;
    cin>>input;
    for(int i=1;i<=input;i++){
        fact*=i;
    }
    cout<<"The factorial of "<<input<<" is: "<<fact;
    return 0;
}