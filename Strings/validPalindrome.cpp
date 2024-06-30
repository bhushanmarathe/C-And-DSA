#include <bits/stdc++.h>

using namespace std;

bool isvalid(char ch)
{
    if ((ch >= 'a' & ch <= 'z') || (ch >= 'A' & ch <= 'Z') || (ch >= '0' & ch <= '9'))
    {
        return 1;
    }

    return 0;
}

char toLowerCase(char ch)
{
    if ((ch >= 'a' & ch <= 'z') || (ch >= '0' & ch <= '9'))
    {
        return ch;
    }

    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return 0;
        }

        else
        {
            start++;
            end--;
        }
    }

    return 1;
}

bool isPalindrome(string s)
{
    // remove unwanted characters
    string temp = "";

    for (int j = 0; j < s.length(); j++)
    {
        if (isvalid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    // convert to lower case

    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }

    // check Palindrome

    return checkPalindrome(temp);
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    string s1 = "race a car";
    string s2 = " ";

    cout << isPalindrome(s) << endl;
    cout << isPalindrome(s1) << endl;
    cout << isPalindrome(s2) << endl;
}