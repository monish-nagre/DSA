#include<iostream>
using namespace std;

int main() {

    cout << "Enter the no." << endl;
    int n;
    cin>> n;


    bool isPrime = 1;

    for(int i =2; i<n; i++) {
       
       if(n%i == 0) {
        isPrime = 0;

        break;
       }
    }

       if(isPrime == 0) {
        cout << "Not a Prime No.";
       } else {
        cout << "Prime No.";
       }
}