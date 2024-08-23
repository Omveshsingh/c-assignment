//Q1.
#include<iomanip>
#include<string>
#include<iostream>
using namespace std;
int main(){
   int input;
   int sum=0;
   cout<<"Enter a number: "<<endl;
   cin>>input;
   for(int i=1;i<=input;i++){
    sum+=i;
   } 
   cout<<"The sum of the first 5 natural numbers is: "<<sum<<endl;
   return 0;
}