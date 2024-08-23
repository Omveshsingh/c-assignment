#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string str1;
    cout<<"Enter a string: ";
    cin>>str1;
    reverse(str1.begin(),str1.end());
    cout<<"Reversed string: "<<str1;
    return 0;
}