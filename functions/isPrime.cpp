#include<iostream>
using namespace std;

bool isPrime(int n) {

    for(int i=2; i<n; i++) {

        if(n%i == 0) {
            return 0;  // not prime
        }
    }
    return 1; // isPrime
}

int main() {

    cout<<"enter the no." <<endl;
    int n;
    cin>> n;

    if(isPrime(n)) {
        cout<<"isPrime" << endl;
    } else {
      cout <<"is not prime" << endl;
    }
}