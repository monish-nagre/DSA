#include<iostream>
using namespace std;

int main() {

    cout<< "Enter the no."<< endl;
    int n;
    cin>> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        int count = i;
        while(j<=i){
        cout<< count ;
        count ++;
        j++;
        }
        cout<< endl;
        i++;
    }
}