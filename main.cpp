#include <iostream>
using namespace std;

// int main() {
//     cout << "Hello, Monu!" << endl;
//     return 0;
// }

int main() {

// Sum of all n numbers....

    cout<< "Enter the no." << endl;
    int n;
    cin>> n;

    int sum = 0;

    for(int i=0; i<=n; i++) {
        sum = sum + i;
    }

    cout<< "sum:" << sum << endl;
}


