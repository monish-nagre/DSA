#include<iostream>
using namespace std;


void reverseArray(int arr[], int size){

    int start = 0;
    int end = size-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


void printArray(int arr[], int n) {
    for(int i =0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout<< endl;
}

int main() {

    int arr1[5] = {1,2,3,4,5};
    int arr2[7] = {4,5,6,7,8,9,15};

    reverseArray(arr1, 5);
    reverseArray(arr2, 7);

    printArray(arr1,5);
    printArray(arr2, 7);

}