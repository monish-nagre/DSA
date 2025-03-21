#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< endl;
}

void Swap(int arr[]) {

        int temp = arr[1];
        arr[1]= arr[0];
        arr[0] = temp;
}

int main() {

    int arr1[2] = {1,2};

    Swap(arr1);

    printArray(arr1,2);
}