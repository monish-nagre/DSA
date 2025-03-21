#include<iostream>
using namespace std;

void mergeSorted(int arr1[], int m, int arr2[], int n, int arr3[]){
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while(i<m){
        arr3[k++]= arr1[i++];
    }

    while(i<n) {
        arr3[k++] = arr2[j++];
    }
}

void print(int arr3[], int size) {
    for(int i =0; i<size; i++){
        cout<< arr3[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr1[5] = {1,3,5,8,9};
    int arr2[3] = {2,4,6};

    int arr3[8];

    mergeSorted(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);
}