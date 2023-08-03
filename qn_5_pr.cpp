#include <iostream> 
using namespace std;

void displayArray(int newarr[], int len);
int main()
{
    int arr1[] = {1, 2, 3, 15, 65};
    int arr2[] = {0, 11, 12, 14};
    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);
    int newarr[len1 + len2];
    for (int i = 0; i < len1; i++)
    {
        newarr[i] = arr1[i];
    }
    for (int i = 0; i < len2; i++)
    {
        newarr[i + len1] = arr2[i];
    }
    int n = sizeof(newarr) / sizeof(int);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (newarr[j] > newarr[j + 1])
            {
                int temp = newarr[j];
                newarr[j] = newarr[j + 1];
                newarr[j + 1] = temp;
            }
        }
    }
    cout << "Orded Array 1 : " << endl;
    displayArray(arr1, len1);
    cout << "Orded Array 2 : " << endl;
    displayArray(arr2, len2);
    cout << "Orded Merged Array : " << endl;
    displayArray(newarr, n);
}
void displayArray(int newarr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << newarr[i] << " ";
    }
    cout << endl;
}