#include<iostream>
using namespace std;

int main() {

    cout << "Enter the no." << endl;
    int n;
     cin>> n; // 123   465 

     int ans = 0;

     while(n!= 0) {

        int digit = n % 10;

        ans = (ans * 10) + digit;

        n = n/10;
     }

     cout << ans << " ";
}