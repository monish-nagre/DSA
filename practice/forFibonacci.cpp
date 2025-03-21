#include<iostream>
using namespace std;

int main() {

    int n = 10;

    // 0 1 1 2 3 5 8 13 21 34....

    int a = 0;
    int b = 1;

    cout << a << " ";
    cout << b << " ";

    for(int i = 1; i<=n; i++) {
  
        int next = a + b;
        cout << next << " ";              
        
        a = b;
        b = next;

    }
}