#include <bits/stdc++.h>

using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' & ch <= 'z')
    {
        return ch;
    }

    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

char toUpperCase(char ch)
{
    if (ch >= 'A' & ch <= 'Z')
    {
        return ch;
    }

    else
    {
        char temp = ch - 'a' + 'A';
        return temp;
    }
}

int toNumber(char ch)
{

    if (ch >= 'a' & ch <= 'z')
    {
        return ch;
    }

    else
    {
        char temp = ch - '0';
        return temp;
    }
}

int main()
{
    char ch;

    cin >> ch;

    cout << toLowerCase(ch) << endl;

    char ch1;

    cin >> ch1;

    cout << toUpperCase(ch1) << endl;

    char ch2;

    cin >> ch2;

    cout << toNumber(ch2) << endl;
}