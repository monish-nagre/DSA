#include<iostream>
using namespace std;

int getLength(char name[]){
    int i=0;
    int count = 0;
    while(name[i++]!= '\0'){
        count++;
    }
    return count;
}

void reverseString(char name[], int size){
     int s = 0, e = size-1;
     while(s<e){
        swap(name[s++], name[e--]);
     }
}

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    } else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// reverse agher same hai original char array se --> its palindrome
bool checkPalindrome(char arr[], int size){
    int s = 0;
    int e = size-1;

    while(s<=e){
        if(toLowerCase(arr[s]) != toLowerCase(arr[e])){
            return 0;
        } else {
           s++;
           e--;
        }
    }
    return 1;
}

int main() {

    char name[20];

    cout<< "Enter the name :" << endl;
    cin>> name;
    // name[2]= '\0';    2nd index pr null character store kerdo , tho o/p me index 0,1 vali char show ho jayege.

    cout << "your name is "<< name << endl;

    int len = getLength(name);

    cout<<"get the lenth of char array :"<< len << endl;

    reverseString(name,len);

    cout << "Reverse Name :"<< name << endl;
    
    cout << "Palindrome or not "<< checkPalindrome(name,len) << endl;

    // cout << "toLowerCase here: "<< toLowerCase('m')<< endl;
    // cout << "toLowerCase here: "<< toLowerCase('S')<< endl;


    return 0;

}

// Note : 