#include <iostream>
using namespace std;

bool search(int num[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {

        if (num[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int size;
    cout << "Enter the size of array;" << endl;
    cin >> size;

    int key;
    cout << "Enter the key:" << endl;
    cin >> key;

    int arr[10] = {12, 1, 4, -2, 6, 8, 7, 3, -4, 22};

    bool result = search(arr, 10, key);

    if (result)
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is absent" << endl;
    }
}