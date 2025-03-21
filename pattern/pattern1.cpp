#include<iostream>
using namespace std;

int main() {

    cout<<"Enter the input no."<<endl;
    int n;
    cin>> n;

    int i=1;

    while(i<=n){
        int j=1;
         while(j<=n){
            cout << "*";
            j++;
         }
         cout<<endl;
         i++;
    }
}