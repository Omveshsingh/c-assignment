//Q1.
#include<iomanip>
 #include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    int sum=0;
    cout<<"Enter the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"Sum of the array: "<<sum;
    return 0;
}

//Q2.
#include<iomanip>
 #include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    int even=0;
    int odd=0;
    cout<<"Enter the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }
    }
    cout<<"Sum of the odd numbers: "<<odd<<endl;
    cout<<"Sum of the even numbers: "<<even;
    return 0;
}

//Q3.
#include<iomanip>
 #include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    int even=0;
    int odd=0;
    cout<<"Enter the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"NUmber of odd numbers: "<<odd<<endl;
    cout<<"Number of even numbers: "<<even;
    return 0;
}