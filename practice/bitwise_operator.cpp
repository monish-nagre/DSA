#include<iostream>
using namespace std;

int main() {

    int a = 3;
    int b = 6;

     cout << "a & b = " << (a & b) << endl;
     cout << "a || b = " << (a | b) << endl;
     cout << "~a = " << (~a) << endl;
     cout << "a ^ b = " << (a ^ b) << endl;


     int i = 7;

     cout << ++i <<endl;
     // print : 8, i = 8

     cout << i++ << endl;
     // print : 8 , i = 9

     cout << i-- << endl;
     // print : 9, i = 8

     cout << --i << endl;
     // print : 7 , i = 7 
} 