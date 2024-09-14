#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"Enter columns: ";
    cin>>columns;
    int arr1[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr1[i][j];
        }
        cout<<endl;
    }
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            sum += arr1[i][j];
        }
    }
    cout<<"Sum of array: "<<sum;
    return 0;
}