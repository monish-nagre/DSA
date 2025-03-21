#include<iostream>
using namespace std;

int findPeak(int arr[], int size) {

    int s = 0;
    int e = size-1;

    int mid = s + (e-s)/2;

    while(s<e) {   // (s<=e) yeh nhi likhe kyuki , ferse hum same chiz check kr rehe and infinity loop me fass jayege : dry run kerke dekh le 
       
       if(arr[mid] < arr[mid+1]){
          s = mid + 1;
       }
       else {
         e = mid;
       }

       mid = s + (e-s)/2;
    }
    return mid;
}

int main() {

    int array[7] = {3,4,5,6,4,2,1};

    int ans = findPeak(array,7);

    cout <<"Peak :" << ans << endl;
}