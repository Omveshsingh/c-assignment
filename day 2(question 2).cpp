//Q2.
#include<iomanip>
#include<string>
#include<iostream>
using namespace std;
int main(){
    int input;
    cout<<"Enter the score: "<<endl;
    cin>> input;
    if((100>=input)&&(input>=90)){
        cout<<"Grade: A"<<endl;
    }
    else if((89>=input)&&(input>=80)){
        cout<<"Grade: B"<<endl;
    }
    else if((79>=input)&&(input>=70)){
        cout<<"Grade: C"<<endl;
    }
    else if((69>=input)&&(input>=60)){
        cout<<"Grade: D"<<endl;
    }
    else {
        cout<<"Grade: F"<<endl;
    }
    return 0;
}