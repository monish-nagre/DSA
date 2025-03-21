#include<iostream>
using namespace std;

void zerosOnLeft(int arr[], int size){
    int nonzero = 0;

    for(int j=0; j<size; j++){
        if(arr[j] != 0){
            swap(arr[j],arr[nonzero++]);
        }
    }
}

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
}

int main() {

    int arr1[7] = {2,0,5,0,3,0,0};

    zerosOnLeft(arr1, 7);

    print(arr1, 7);
}

// check krte gye j k sath ki nonzero value kaha hai ,
// jese he mili place kerdi nonzero k index main and nonzero++ kr diya for next nonzero value place kerne k liye 