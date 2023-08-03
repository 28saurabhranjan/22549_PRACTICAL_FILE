#include <iostream>
#include <string>
using namespace std;

// a string concatenate(string, string); //b void compare(string, string); //c int stringLength(string); //d string uppercase(string); //e string reverse(string); //f string insertString(string, string, int);//g
void showAddress(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << "Position of " << str[i] << ": " << (void *)str[i] << endl;
    }
}
string concatenate(string str1, string str2)
{
    string conc;
    conc = str1 + str2;
    return conc;
}
void compare(string str1, string str2)
{
    if (str1 > str2)
    {
        cout << str1 << " > " << str2 << endl;
    }
    else if (str1 < str2)
    {
        cout << str2 << " < " << str1 << endl;
    }
    else
    {
        cout << str1 << " = " << str2 << endl;
    }
}
int len(string &x)
{
    int count = 0;
    for (int i : x)
    {
        count++;
    }
    return (count);
}
int stringLength(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        count++;
    }
    return count;
}
string uppercase(string str)
{
    string str_upper;
    for (int i = 0; i < str.length(); i++)
    {
        char letter = str[i];
        str_upper += toupper(letter);
    }
    return (str_upper);
}
string reverse(string str)
{
    string reversed_str;
    for (int i = 0; i < str.length(); i++)
    {
        char letter = str[i];
        reversed_str = letter + reversed_str;
    }
    return (reversed_str);
}
string insertString(string str1, string str2, int pos)
{
    string newStr;
    for (int i = 0; i < pos; i++)
    {
        newStr += str1[i];
    }
    newStr += str2;
    for (int i = pos; i < str1.length(); i++)
    {
        newStr += str1[i];
    }
    return (newStr);
}

int main()
{
    char key;
    while (key != ' ')
    {
        cout << "String Manipulation Program : Press a-g to manipulate strings, press spacebar to exit " << endl;
        cout << " a.Show address of each character in string " << endl;
        cout << "b.Concatenate two strings." << endl;

        cout << " c. Compare two strings " << endl;
        cout << "d.Calculate length of the string(use pointers) " << endl;
        cout << "e. Convert all lowercase characters to uppercase " << endl;
        cout << "f.Reverse the string " << endl;
        cout << "g. Insert a string in another string at a user specified position" << endl;
        char response;
        cout << "Enter your response : ";
        cin >> response;
        switch (response)
        {
        case 'a':
        {
            string str;
            cout << "Enter a string : ";
            cin >> str;
            showAddress(str);
            break;
        }
        case 'b':
        {
            string str1, str2;
            cout << "Enter first string : ";
            cin.ignore();
            getline(cin, str1);
            cout << "Enter second string : ";
            getline(cin, str2);
            string concinated = concatenate(str1, str2);
            cout << concinated << endl;
            break;
        }
        case 'c':
        {
            string str1, str2;
            cout << "Enter first string : ";
            cin.ignore();
            getline(cin, str1);
            cout << "Enter second string : ";
            getline(cin, str2);
            compare(str1, str2);
            break;
        }
        case 'd':
        {
            string str;
            cout << "Enter a string : ";
            cin >> str;
            int len = stringLength(str);
            cout << len << endl;
            break;
        }
        case 'e':
        {
            string str;
            cout << "Enter a string : ";
            cin >> str;
            string upper_str = uppercase(str);
            cout << upper_str << endl;
            break;
        }
        case 'f':
        {
            string str;
            cout << "Enter a string : ";
            cin >> str;
            string reversed_str = reverse(str);
            cout << reversed_str << endl;
            break;
        }
        case 'g':
        {
            string str1, str2;
            int pos;
            cout << "Enter first string 1 : ";
            cin.ignore();
            getline(cin, str1);
            cout << "Enter second string 2 : ";
            getline(cin, str2);
            cout << "Enter position where you want to insert string 2: ";
            cin >> pos;
            string newStr = insertString(str1, str2, pos);
            cout << newStr << endl;
            break;
        }
        default:
        {
            break;
        }
        }
    }
}
