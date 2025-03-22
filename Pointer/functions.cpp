#include<iostream>
using namespace std;

void print(int *p){

    cout << "Inside Function: " <<  p << endl;
}

void update(int *p) {

    // p = p + 1     // ---> p ka address update hua bt temp p me hua soo , no reflect on main function
    
    *p = *p + 1;   // address by value se khel rehe isliye value update hue.
    cout<<"Inside the update function: "<< *p << endl;
}

int getSum(int arr[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    
    // int nums = 5;

    // int *ptr = &nums;

    // print(ptr);  // address pass kiya

    // // cout<<"Before -->"<< ptr << endl;
    // // update(ptr);
    // // cout<<"After -->"<< ptr << endl;

    // cout<<"Before -->"<< *ptr << endl;
    // update(ptr);
    // cout<<"After -->"<< *ptr << endl;

    int arr[6] = {1,3,4,6,7,9};

    // int ans = getSum(arr, 6);

    int ans = getSum(arr + 3, 3);  // pass the 3rd index address and start sum with 3rd index 

    cout << "sum of array is : "<< ans << endl;




    return 0;
}