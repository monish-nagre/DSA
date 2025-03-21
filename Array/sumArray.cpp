#include <iostream>
using namespace std;

int sumArray(int num[], int size)
{

    int add = 0;

    for (int i = 0; i < size; i++)
    {
        add = add + num[i];
    }

    return add;
}

int main()
{

    int size;
    cout << "enter the size of array:" << endl;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the digit:" << endl;
        cin >> arr[i];
    }

    int sum = sumArray(arr, size);

    cout << "Sum of all array elements :" << sum << endl;
}