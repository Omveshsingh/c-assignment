#include<iomanip>
 #include <iostream>
using namespace std;
int main(){
    int g1,g2,g3,g4,g5;
cout<<"Enter grade 1: "<<endl;
cin>>g1;
cout<<"Enter grade 2: "<<endl;
cin>>g2;
cout<<"Enter grade 3: "<<endl;
cin>>g3;
cout<<"Enter grade 4: "<<endl;
cin>>g4;
cout<<"Enter grade 5: "<<endl;
cin>>g5;
float sum=g1+g2+g3+g4+g5;
float average=sum/5;
cout<<"The average grade is: "<<average<<endl;
return 0;
}