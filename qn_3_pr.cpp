#include <iostream>
#include <string>
using namespace std;

int noOfChar(string str, char ch)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (ch == str[i])
        {
            count++;
        }
    }
    return count;
}
int main(int argc, char *argv[])
{
    string text = argv[1];
    string printedChar;
    cout << "String : " << text << endl;
    cout << "| char |occurance |" << endl;
    for (int i = 0; i < text.length(); i++)
    {
        printedChar += text[i];
        if (noOfChar(printedChar, text[i]) == 1)
        {
            cout << "| " << text[i] << " | " << noOfChar(text, text[i]) << " | " << endl;
        }
    }
}