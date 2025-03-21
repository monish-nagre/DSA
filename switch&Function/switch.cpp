#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the char:" << endl;
    char ch;
    cin >> ch;

    switch (ch)
    {

    case 1:
        cout << "first" << endl;
        cout << "first again" << endl;
        break;

    case '1':
        cout << "chracter" << endl;
        cout << "character again" << endl;
        break;

    default:
        cout << " Default case here.." << endl;
        break;
    }
    return 0;
}