#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    // int mid = (start + end)/2;

    while(start <= end) {

         int mid = start + (end - start)/2;

        if(key == arr[mid]){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
        // mid = (start+end)/2;
    }
    return -1;
}

int main() {

    int even[6] = {2,4,6,8,15,22};
    int odd[5] = {5,8,10,14,34};

    int EvenIndex = BinarySearch(even,6,8);
    cout << "Even Index ans:" << EvenIndex << endl;

    int OddIndex = BinarySearch(odd,5,22);
    cout << "odd Index ans:" << OddIndex << endl;


}

// Note: ya tho mid value loop k bhar nikl k loop me last me update karo
// yaa ek he bar likhna tho loop k andar start me daldo