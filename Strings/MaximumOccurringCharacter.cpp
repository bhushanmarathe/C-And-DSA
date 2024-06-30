#include <bits/stdc++.h>

using namespace std;

char maximumOccurringCharacter(string str)
{
    // unordered_map<char, int> mp;

    // // char ch = "";

    // for (int i = 0; i < str.length(); i++)
    // {
    //     mp[str[i]]++;
    // }

    // for (auto i : mp)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // for (auto i : mp)
    // {
    //     if (i.second > 1)
    //     {
    //         // cout << i.second << endl;
    //         return i.first;
    //     }
    // }

    int arr[26] = {0};
    int number = 0;
    for (int i = 0; i < str.length(); i++) // create an array of characters
    {
        char ch = str[i];

        number = ch - 'a';
        // cout << number << endl;
        arr[number]++;
        // cout << arr[number] << endl;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int ans = 0;
    int maxi = -1;

    for (int i = 0; i < 26; i++)
    {
        if ((arr[i] > maxi))
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalCharacter = ans + 'a';
    return finalCharacter;
}

int main()
{
    string s = "template";

    cout << maximumOccurringCharacter(s) << endl;
}