#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

void testForLoop(int arr[], int size) {
    int nonzero = 0;
    for (int j = 0; j < size; j++) {
        if (arr[j] != 0) {
            swap(arr[j], arr[nonzero++]);
        }
    }
}

void testWhileLoop(int arr[], int size) {
    int nonzero = 0, j = 0;
    while (j < size) {
        if (arr[j] != 0) {
            swap(arr[j], arr[nonzero]);
            nonzero++;
        }
        j++;
    }
}

int main() {
    const int SIZE = 1000000;  // Large dataset
    int arr1[SIZE], arr2[SIZE];

    // Initialize arrays with some random values
    for (int i = 0; i < SIZE; i++) {
        arr1[i] = arr2[i] = (i % 3 == 0) ? 0 : i;
    }

    // Measure For Loop Time
    auto startFor = high_resolution_clock::now();
    testForLoop(arr1, SIZE);
    auto endFor = high_resolution_clock::now();
    cout << "For Loop Time: " << duration_cast<microseconds>(endFor - startFor).count() << " µs" << endl;

    // Measure While Loop Time
    auto startWhile = high_resolution_clock::now();
    testWhileLoop(arr2, SIZE);
    auto endWhile = high_resolution_clock::now();
    cout << "While Loop Time: " << duration_cast<microseconds>(endWhile - startWhile).count() << " µs" << endl;

    return 0;
}


//  ./test
//  For Loop Time: 9726 µs
//  While Loop Time: 7483 µs