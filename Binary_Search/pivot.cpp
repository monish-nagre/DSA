#include<iostream>
using namespace std;

int pivot(int arr[], int size){

    int s = 0;
    int e = size -1;

    int mid = s + (e-s)/2;

    while(s<e) {
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return e;
}

int main() {

    int arr[5] = {7,8,9,1,2};

    cout << "pivot at index:" << pivot(arr, 5)<< endl;


}


// Note: 1st: mid nikala 
      // 2nd: campare kiya arr[0], ki usse bada hai , agher hai tho s mo bad do because hame tho niche vala val. niklna (ref. by graph). 