//Q3.
#include<iomanip>
#include<string>
#include<iostream>
using namespace std;
int main(){
    int input;
    cout<<"Enter a number: ";
    cin>>input;
    cout<<"Multiplication table of "<<input<<":"<<endl;
    for(int i=1;i<=10;i++){
        cout<<input<<"x"<<i<<"="<<input*i<<endl;
    }
    return 0;
}