#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter num 1 : ";
    cin >> a;
    cout << "Enter num 2 : ";
    cin >> b;
    if (a < b)
    {
        while (b % a != 0)
        {
            a = b % a;
        }
        cout << "Required GCD : " << a;
    }
    else
    {
        while (a % b != 0)
        {
            b = a % b;
        }
        cout << "Required GCD : " << b;
    }
}