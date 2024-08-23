//Q1.
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

//Q2.
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

//Q3.
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    char ch;
    int vow=0;
    int cons=0;
    int l=str.length();
    for(int i=0;i<l;i++){
        if((str.at(i)=='a')||(str.at(i)=='i')||(str.at(i)=='e')||(str.at(i)=='o')||(str.at(i)=='u')){
            vow++;
        }
        else{
            cons++;
        }
    }
    cout<<"Number of vowels: "<<vow<<endl;
    cout<<"Number of consonants: "<<cons<<endl;
    return 0;
}