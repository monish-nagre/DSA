#include<iostream>
using namespace std;

void printArray(int arr[], int size){
      for(int i=0; i<size; i++) {
          cout<< arr[i] << " ";
      }
      cout<< endl;
}

void sortOne(int arr[], int size) {

    int left = 0;
    int right = size-1;

    while(left < right) {
        while(arr[left] == 0 && left < right) {   // jb tk left me 0 hai tb tk left++ hoga
            left++;
        }
        while(arr[right] == 1 && left < right) {  // jb tk right me 1 hai tb tk right-- hoga
            right--;
        }
        if(left < right) {
            swap(arr[left], arr[right]);    // jb dono bhi nhi matlb , opp. he hai swap kerdo
            left++;
            right--;
        }
    }
}



int main() {

    int arr[7] = {0,1,1,0,1,0,1};

    sortOne(arr, 7);
    printArray(arr, 7);

    return 0;
    
}