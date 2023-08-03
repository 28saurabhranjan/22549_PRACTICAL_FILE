#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{

    int numberOfTerms;
    if (argc == 1)
    {
        cout << "Command line input not passed!" << endl<<" Please Enter the number of terms ";
        cin >> numberOfTerms;
    }
    else
    {
        numberOfTerms = stoi(argv[1]);
    }
    cout << "Entered number of terms : " << numberOfTerms << endl;
    float sumOfSeries = 0;
    for (int i = 1; i <= numberOfTerms; i++)
    {
        sumOfSeries += pow(-1, i + 1) / pow(i, i);
    }
    cout << "Sum of the series till " << numberOfTerms << " terms is " << sumOfSeries;
    return 0;
}