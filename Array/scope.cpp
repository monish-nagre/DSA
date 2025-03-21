#include <iostream>
using namespace std;

// Note: when we pass the arr to function , we actually paass the address of that start array ,because arr store the start address.
//  In variable , when we pass the variable to function , it creates a copy(pass by value).

void update(int num[], int size)
{

    num[0] = 101;

    cout << "Enter in update function" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    cout << "Going to main function :" << endl;
}

int main()
{

    int size;
    cout << "Enter the size of array:" << endl;
    cin >> size;

    int arr[3] = {2, 5, 8};

    update(arr, size); // size --> 3

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
}