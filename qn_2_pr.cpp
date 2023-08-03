#include <iostream> 
using namespace std;
int main()
{
    int arr[5] = {1, 1, 2, 3, 2};
    int uni[5] = {0, 0, 0, 0, 0};
    uni[0] = arr[0];
    int index = 1;
    bool found;
    for (int i = 1; i < 5; i++)
    {
        found = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            uni[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout<< uni[i] << " ";
    }
    return 0;
} 