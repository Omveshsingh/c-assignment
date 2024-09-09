//Q1
#include <iostream>
using namespace std;

int main(){
    int size;
    int target;
   cout<<"Enter Size: ";
   cin>>size;
   cout<<"Enter array: ";
   int* arr= new int[size];
   for(int i=0;i<size;i++){
    cin>> arr[i];
   }
   cout<<"Enter Target: ";
   cin>>target;
   int i =0;
   int present=0;
    while (i<size)
    {
        if(arr[i]==target){
            present++;
        }
        i++;
    }
    if(present>0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
   return 0;
}

//Q2
#include <iostream>
using namespace std;

int main(){
    int size;
    int target;
   cout<<"Enter Size: ";
   cin>>size;
   cout<<"Enter array: ";
   int* arr= new int[size];
   for(int i=0;i<size;i++){
    cin>> arr[i];
   }
   cout<<"Enter Target: ";
   cin>>target;
   int i =0;
   int position=-1;
    while (i<size)
    {
        if(arr[i]==target){
            position=i;
        }
        i++;
    }
    cout<<"Output: "<<position+1;
   return 0;
}