#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void sort012(int arr[], int n) {
    int left = 0;
    int right = n-1;
    int i =0;

    while(i <= right) {
        if(arr[i] == 0) {
            swap(arr[i], arr[left]);
            i++;
            left++;
        }
        else if(arr[i] == 2) {
            swap(arr[i], arr[right]);
            right--;
        }
        else {
            i++;
        }
    } 
}

int main() {

    int arr[7] = {0,1,2,1,2,1,2};

    sort012(arr, 7);
    printArray(arr, 7);

}

// Note: i travel karega n-1 tk.
//       Agher arr[i] == 0 , matlb left me dalna hai usko , isliye left se swap kerdo
//       Agher arr[i] == 2 , matlb right me dalna hai usko, isliye right se swap kerdo
//       kuch nhi tho i++ kerdo , kyuki 1 ko kahi nhi shift kerna hai 