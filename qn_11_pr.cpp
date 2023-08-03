#include <iostream> 
#include <fstream> 
using namespace std;

int main()
{
    ifstream file("textfile.txt");
    ofstream fileCopy("copiedfile.txt");
    string line;
    while (file)
    {
        getline(file, line);
        string copyLine;
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] != ' ')
            {
                copyLine += line[i];
            }
        }
        fileCopy << copyLine << endl;
    }
}