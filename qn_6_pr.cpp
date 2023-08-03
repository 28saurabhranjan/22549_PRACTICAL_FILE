#include <iostream> 
using namespace std;
int main()
{
    int set[] = {1, 2, 3, 5, 81, 7, 8, 9};
    int size = sizeof(set) / sizeof(int);
    int search_int;
    cout << "Enter number to be searched : ";
    cin >> search_int;
    bool found = false;
    int pos;
    for (int i = 0; i < size; i++)
    {
        if (search_int == set[i])
        {
            found = true;
            pos = i;
            break;
        }
    }
    if (found)
    {
        cout << search_int << " found at " << pos + 1 << " position";
    }
    else
    {
        cout << search_int << " is not in the set";
    }
}