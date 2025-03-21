#include<iostream>
using namespace std;

int LeftOccurence(int arr[], int size, int key) {

    int start = 0;
    int end = size -1;
    int temp = -1;

    int mid = start + (end - start)/2;

    while(start <= end) {
        
        if(arr[mid] == key) {
            temp = mid;
            end = mid -1;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid -1;
        }

        mid = start + (end - start)/2;
    }
    return temp;
}

int RightOccurence(int arr[], int size, int key) {

    int start = 0;
    int end = size -1;
    int temp = -1;

    // int mid = start + (end - start)/2;

    while(start <= end) {

        int mid = start + (end - start)/2;
        
        if(arr[mid] == key) {
            temp = mid;
            start = mid + 1;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid -1;
        }

        // mid = start + (end - start)/2;
    }
    return temp;
}




int main() {

    int even[6] = {1,2,3,3,3,5};

    int left = LeftOccurence(even,6,3);
    cout << "Left most Occurence : " << left << endl;

    int right = RightOccurence(even,6,3);
    cout << "Right most Occurence:" << right << endl;

    int NoOfOccurence = (right - left) + 1;
    cout << "No. Of Occurence:" << NoOfOccurence << endl;

}