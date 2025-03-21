#include<iostream>
using namespace std;

// Difference the char array & string array.

int main() {

    char character[5];

    cout<< "Enter the character name :" << endl;
    cin>> character;

    character[2] = '\0';

    cout << character << endl;
    cout << endl;




    string str;

    cout <<"Enter the string "<< endl;
    cin>> str;

    str[2] = '\0';

    cout << str;

}

// Note : In char array when we put the '\0' then its stop print don't go forward to see the next index char values.
//        In string array when we put the '\0' it skip that index value and print the next index values.