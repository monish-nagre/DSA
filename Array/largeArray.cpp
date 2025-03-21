#include<iostream>
#include<vector>
using namespace std;
#define MAX 100

int main() {

// Sum of all index array...
    cout<< "Enter the no." << endl;
   
    vector<int> arr(MAX);

    int sum = 0;
    int count;
    cin>> count;

    for(int i =1; i< count; i++) {
        arr[i] = i;
        sum = sum + arr[i];
    }

    cout <<"Sum :" << sum << endl;    
}

