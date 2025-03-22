#include<iostream>
using namespace std;

int main() {

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    cout <<"Address of arr :" << arr << endl; 
    cout <<"Address of arr :" << &arr[1] << endl; 
    cout <<"Address of arr :" << &arr[2] << endl;

// value print kiya...
    cout <<"value at star of arr :" << *arr << endl;

// value + 1
    cout <<"star of arr :" << *arr + 22 << endl;   

// address + 1--> next index 
    cout <<"star of arr :" << *(arr + 1) << endl; 

    int nums = 5;

    int *ptr = &nums;

    cout << "Pointer :" << ptr++ << endl;
    cout << "Pointer ++ :" << ptr << endl;

    int i=3;
    cout<<"Chalaki++ --->"<< i[arr] << endl;

    // size of arr
    cout<<"Size of arr: "<<sizeof(arr)<< endl; 
   
    return 0;

}

// Note : 

// arr[i] = *(arr + i)   --> ese work krta hai yeh internally when i use the arr[i] to find the value at index i.
// i[arr] = *(i + arr)   --> chaliki++ 