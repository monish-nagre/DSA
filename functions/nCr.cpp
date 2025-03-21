#include <iostream>
using namespace std;

// function

int fact(int n)
{

    int ans = 1;

    for (int i = 1; i <= n; i++)
    {

        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r)
{

    int num = fact(n);

    int denom = fact(r) * fact(n - r);

    int result = num / denom;

    return result;
}

int main()
{

    int n, r;

    cout << "Enter the no. n: " << endl;
    cin >> n;

    cout << "Enter the no. r: " << endl;
    cin >> r;

    int ans = nCr(n, r);

    cout << "nCr : " << ans << endl;
}