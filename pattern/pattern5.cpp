#include<iostream>
using namespace std;

int main() {

    cout<<"Enter the no."<< endl;
    int n ;
    cin>> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
          cout<< "*";
          j++;
        }
        cout<<endl;
        i++;
    }

    // cout<<"Enter the no."<< endl;
    // int n ;
    // cin>> n;

    // int i = 1;

    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //       cout<< i;
    //       j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // cout<<"Enter the no."<< endl;
    // int n ;
    // cin>> n;

    // int i = 1;
    // int count = 1;

    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //       cout<< count << " ";
    //       count++;
    //       j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
}