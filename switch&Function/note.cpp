#include <iostream>
using namespace std;

int main()
{

    int num, Rs100, Rs50, Rs20, Rs1;

    cout << "Enter the no:" << endl;
    cin >> num;

    switch (1)
    {

    case 1:
        Rs100 = num / 100;
        num = num - (Rs100 * 100);
        cout << "Rs100:" << Rs100 << endl;

    case 2:
        Rs50 = num / 50;
        num = num - (Rs50 * 50);
        cout << "Rs50:" << Rs50 << endl;

    case 3:
        Rs20 = num / 20;
        num = num - (Rs20 * 20);
        cout << "Rs20:" << Rs20 << endl;

    case 4:
        Rs1 = num / 1;
        num = num - (Rs1 * 1);
        cout << "Rs1:" << Rs1 << endl;
    }

    return 0;
}