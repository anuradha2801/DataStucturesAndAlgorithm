// consider only numbers,and lower case alphbets and find wether the string is palindrome or not
#include <bits\stdc++.h>
using namespace std;

bool checkpalindrom(string a)
{
    int s = 0;
    int e = a.length() - 1;
    while (s <= e)
    {
        if (a[s] == a[e])
        {
            s++;
            e--;
        }
        else
        {
            return 0;
        }
    }
     return 1;
}
bool valid(char ch)
{
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '1' && ch >= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z' || ch >= '1' && ch >= '9')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
int main()
{
    string s;
    cin >> s;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = tolowercase(temp[j]);
    }
    cout << checkpalindrom(temp);
    return 0;
}