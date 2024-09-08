 //Q1
#include <iostream>
using namespace std;
int findMax(const int arr[],int size){
    int i=0;
    int max=arr[i];
    while(i<size){
        
        if(max<arr[i+1]){
            max=arr[i+1];
        }
        i++;
    }
    return max;
}
int main(){
   int size;
   cout<<"Enter Size: ";
   cin>>size;
   cout<<"Enter array: ";
   int* arr= new int[size];
   for(int i=0;i<size;i++){
    cin>> arr[i];
   }
   cout<<"Maximum value: "<<findMax(arr,size);
    return 0;
}

//Q2
#include<cctype>
#include<algorithm>
#include<string>
#include <iostream>
using namespace std;
bool isPalinderome(const string& str){
    string lower;
    for(char ch : str){
        if(isalnum(ch)){
        lower += tolower(ch);
    }
    }
    string str3=lower;
    reverse(lower.begin(),lower.end());
    return lower==str3;
}
int main(){
   string str;
   cout<<"Enter String: ";
   getline(cin,str);
   if(isPalinderome(str)){
    cout<<"True";
   }
   else{
    cout<<"False";
   }
    return 0;
}