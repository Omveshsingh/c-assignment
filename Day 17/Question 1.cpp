#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"Enter columns: ";
    cin>>columns;
    int arr1[rows][columns];
    int key;
    cout<<"Enter key: ";
    cin>>key;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr1[i][j];
        }
        cout<<endl;
    }
    int count=-1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(arr1[i][j]==key){
                count++;
            }
        }
    }
    if(count!=-1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}