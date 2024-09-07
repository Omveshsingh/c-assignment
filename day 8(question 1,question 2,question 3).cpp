//Q1
#include<string>
#include<iostream>
using namespace std;
int stringLength(string& str){
    int length=0;
    for(char ch : str){
        length++;
    }
    return length;
}
int main(){
    string str;
    cout<<"Enter String";
    getline(cin,str);
    cout<<stringLength(str)<<endl;
    return 0;
} 

//Q2
#include<string>
#include<iostream>
#include<iomanip>
 using namespace std;
int countCharacter(string& str,char ch){
    int length=0;
    for(char c : str){
        if(c==ch)
        length++;
    }
    return length;
}
int main(){
    string str;
    cout<<"Enter String: "<<endl;
    getline(cin,str);
    cout<<"Enter character: "<<endl;
    char ch;
    cin>>ch;
    cout<<countCharacter(str,ch)<<endl;
    return 0;
} 

//Q3
#include<string>
#include<iostream>
#include<iomanip>
 using namespace std;
string concatenateStrings(string& str1,string& str2){
    string str3=str1+str2;
    return str3;
}
int main(){
    string str1;
    cout<<"Enter String: "<<endl;
    getline(cin,str1);
    cout<<"Enter second string: "<<endl;
    string str2;
    getline(cin,str2);
    cout<<concatenateStrings(str1,str2)<<endl;
    return 0;
} 
