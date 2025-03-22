#include<iostream>
using namespace std;

int main() {

    int num = 5;

    cout << "num is :" << num << endl;

    // address of operator --> & 
    cout << "Address of num:" << &num << endl;

    // create a pointer 
    int *ptr = &num;

    cout<< "Value is :" << *ptr << endl;
    cout<< "Address is :" << ptr << endl;

    int i = 3;

    int *p = &i;

    cout << "lets goo...before" << (*p)++ << endl;

    cout << "lets goo...after" << *p << endl;


    // Difference :--> pointer me sirf ptr me uske andar ka address milta and array me num/&num me uska address milta 
    // --> pointer k case me not ptr address is store address
     cout << "Address of num:" << &num << endl;
     cout<< "Address is :" << ptr << endl;


    return 0;
}