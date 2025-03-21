#include<iostream>
using namespace std;

int main() {

    cout<< "Enter the no." << endl;
    int n;
    cin>> n;

    int i = 1;

    while(i<=n) {

        //space daldo
        int space = i - 1;
        while(space) {
            cout<<" ";
            space--;
        }

        // star print kerlo
        int star= n - i + 1;
        while(star) {
            cout<< "*";
            star--;
        }
        cout<<endl;
        i++;
    }
}