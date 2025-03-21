#include<iostream>
using namespace std;

// Q. search key in rotated & Sorted array.

int pivot(int arr[], int size){

    int s = 0;
    int e = size-1;

    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return e;
}

int BinarySearch(int arr[], int start, int end, int key){

    int s =start;
    int e = end;

    int mid = s + (e-s)/2;

    while(s<=e) {

        if(arr[mid] == key){
            return mid;
        } else if( key > arr[mid]){
            s = mid + 1;
        } else {
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }
    return -1;
}



int main() {

    int arr[8] = {10,12,15,19,5,7,9};

    int pivotIndex = pivot(arr, 8);

    int k = 7;

    if(k >= arr[pivotIndex] && k <= 8-1) {
        cout << "line pivot " << BinarySearch(arr, pivotIndex, 8, k)<< endl;
    } else {
        cout << "linr 1st " <<  BinarySearch(arr, 0, pivotIndex-1, k);
    }

    
}