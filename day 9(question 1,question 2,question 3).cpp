//Q1
#include<string>
#include<iostream>
using namespace std;
int main(){
    int input;
    cout<<"Enter value: ";
    cin>>input;
    int* ptr=&input;
    cout<<input<<endl;
    cout<<*ptr<<endl;
    cout<<"Address of the variable: "<<ptr;
    return 0;
}

//Q2
#include<string>
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int* ptr=arr;
    for(int i=0;i<size;i++){
        cout<<*ptr+i<<endl;
    }
    return 0;
}

//Q3
#include<iostream>
using namespace std;
int main(){
    int input;
    cout<<"Enter the input: ";
    cin>>input;
    int* ptr=&input;
    int** ptr2=&ptr;
    cout<<input<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;
    return 0;
}