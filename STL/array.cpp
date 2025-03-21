#include<iostream>
#include<array>
using namespace std;

int main() {

    int arr[4] = {1,2,3,4};

    array<int,4> a = {1,2,3,4};

    int size = a.size();

    cout<<"Array of size: "<<size << endl;   // size of array

    //print array
    for(int i=0; i<size; i++) {
        cout<<a[i] << endl;
    }

    cout<<"Element at 2nd index :" << a.at(2) << endl;

    cout<< "array is empty or not :"<<a.empty() << endl;

    cout<<"1st element is array :" << a.front() << endl;

    cout<<"last element in array :" << a.back()<< endl;     

    // use many more with a dot and see ...
}

