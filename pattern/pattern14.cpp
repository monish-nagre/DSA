#include<iostream>
using namespace std;

int main() {

    cout<<"Enter the no." << endl;
    int n;
    cin>> n;

    int i = 1;

    while(i<=n) {
        int j = 1;
        char ch = 'D' + n - i + j - 4;
         while(j<=i) {
            cout << ch << " ";
            ch++;
            j++;
         }
         cout<< endl;
         i++;
    }
}