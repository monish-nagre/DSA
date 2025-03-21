#include<iostream>
#include<vector>
using namespace std;


int main() {

    cout<<"Enter the no:" <<endl;
    int count;
    cin>> count;

    // Dynamic array size i/p
    vector<int> arr;
    arr.resize(count);

    int sum = 0;

    for(int i=1; i< count; i++) {
       
       arr[i] = i;

       sum = sum + arr[i];
    }

    cout << "Sum:" << sum << endl;
}