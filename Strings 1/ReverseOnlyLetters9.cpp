#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string reverseOnlyLetters(string s)
{
    int n = s.size();
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (isalpha(s[i]) && isalpha(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        else if (!isalpha(s[i]))
        {
            i++;
        }
        else if (!isalpha(s[j]))
        {
            j--;
        }
        else
        {
            i++;
            j--;
        }
    }

    return s;
}

int main()
{
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "String after reversing only letters: "
         << reverseOnlyLetters(s) << endl;

    return 0;
}