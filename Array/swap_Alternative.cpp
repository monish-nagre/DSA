#include<iostream>
using namespace std;

void swapValues(int &a, int &b) {  // pass by reference.
    int temp = a;
    a = b;
    b = temp;   
}

void printArray(int arr[], int size) {

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< endl;
}

void swapAlternative(int arr[], int size){

    for(int i=0; i<size; i=i+2) {
        if(i+1 < size){
            swap(arr[i], arr[i+1]);   // we can use our implement of swapValues 
        }
    }
}

int main() {

    int arr1[8] = {3,4,5,6,7,8,9,12};
    int arr2[5] = {55,34,3,6,8};

    swapAlternative(arr1, 8);
    swapAlternative(arr2, 5);

    printArray(arr1, 8);
    printArray(arr2, 5);
}

//Note: For loop se travel kerte jaunga and condition check kerke swap kr dunga , and aage vala swap kerna isliye i=i+2 kr diya.
// condition : agher i+1 chota hai size se matlb array k range me hai tho swap kerdo.


