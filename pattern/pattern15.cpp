#include<iostream>
using namespace std;

int main() {

    cout<< "Enter the no." << endl;
    int n;
    cin>> n;

    int i = 1;
     while(i<=n) {

        //phele space print kerlo
        int space = n - i;
        while(space) {
            cout<< " ";
            space--;
        }

        // star print kerlo
        int j = 1;
        while(j<=i) {
            cout << "*";
            j++;
        }
        cout<<endl;
        i++;
     }
}

