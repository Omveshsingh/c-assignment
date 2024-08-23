#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int input;
    cout<<"Enter a number: ";
    cin>>input;
    if(input%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}