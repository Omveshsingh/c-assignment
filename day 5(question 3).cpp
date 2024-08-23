#include<string>
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