//Q1.
#include<iomanip>
 #include <iostream>
using namespace std;
int main(){
    int input;
    cout<<"Enter size:";
    cin>>input;
    int arr[input];
    for(int i=0;i<input;i++){
        cin>>arr[i];
    }
    for(int i=0;i<input-1;i++){
        for(int j=0;j<input-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<input;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//Q2.
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Insert the key at the correct position
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int N = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, N);

    cout << "Sorted array: ";
    printArray(arr, N);

    return 0;
}
