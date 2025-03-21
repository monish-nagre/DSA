#include <iostream>
using namespace std;

// function

bool isEven(int Num)
{

    if (Num & 1)
    {
        return 0; // odd
    }

    return 1; // even
}

int main()
{

    int val;
    cout << "Enter the no:" << endl;
    cin >> val;

    if (isEven(val))
    {
        cout << "Given value is Even..." << endl;
    }
    else
        cout << "Given value is Odd..." << endl;
}