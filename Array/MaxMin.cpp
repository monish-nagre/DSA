#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int size)
{

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        if (num[i] > max)
        {
            max = num[i];
        }
    }

    return max;
}

int getMin(int num[], int size)
{

    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {

        if (num[i] < min)
        {
            min = num[i];
        }
    }

    return min;
}

int main()
{

    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the digit: " << endl;
        cin >> arr[i];
    }

    cout << "Maximum value is: " << getMax(arr, size) << endl;
    cout << "Mininum value is: " << getMin(arr, size) << endl;
}