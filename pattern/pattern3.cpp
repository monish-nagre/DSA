#include<iostream>
using namespace std;

int main() {

    cout<<"Enter the no." << endl;
    int n;
    cin>> n;

    int i = 1;
    while(i<=n) {
        int j = 1;
        while(j<=n) {
            cout<< j;
            j++;
        }
        cout<<endl;
        i++;
    }

    // cout<<"Enter the no." << endl;
    // int n;
    // cin>> n;

    // int i = 1;                                     // reverse print:
    // while(i<=n) {
    //     int j = 1;
    //     while(j<=n) {
    //         cout<< n-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

}