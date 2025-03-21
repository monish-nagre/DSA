#include<iostream>
using namespace std;

char getMaxOccCharacter(string s) {

  // int array banaya and zero is initialize kr diya.
    int arr[26] = {0};

 // char uthaya , uska difference nikala and arr k voh index me ++ kr diya. 
    for(int i=0; i<s.length(); i++){
       char ch = s[i];

       int number;
       number = ch - 'a';
       arr[number]++;
    }

    int maxi = -1; 
    int ans = 0;

  // int arr traverse kiya and count maxi nikala and store kiya ans because mapping a to z index wise haina 0 to 25.
    for(int j=0; j<26; j++){
       if(maxi < arr[j]){
          ans = j;
          maxi = arr[j];
       }
    } 

    cout<< maxi << endl;  // count of ch. 

    return 'a' + ans;
}


int main() {

  string str;
  cin>> str;

  char answer = getMaxOccCharacter(str);
  cout << answer << endl;
}

// time complexity --> O(n)
// space complexity --> O(1)