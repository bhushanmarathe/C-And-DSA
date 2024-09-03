#include <bits/stdc++.h>

using namespace std;

/*string reverseWordsInString(string s)
{
    s.push_back(' ');
    vector<string> temp;
    string str = "";
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            if (str.length() > 0)
            {
                temp.push_back(str);

                cout << str << endl;

                str = "";
            }
        }
        else
        {
            str.push_back(s[i]);
        }
        i++;
    }

    reverse(temp.begin(), temp.end());

    for (auto i : temp)
    {
        cout << i << " ";
        str.append(i + " ");
    }

    str.pop_back();
    return str;
}*/

string reverseWords(string s)
{

    string result;
    vector<string> words;
    int n = s.length();
    int i = 0;
    while (i < n)
    {
        while (i < n && s[i] == ' ')
            i++;

        if (i >= n)
            break;

        int j = i;

        while (j < n && s[j] != ' ')
            j++;

        string sub = s.substr(i, j - i);

        words.push_back(sub);

        i = j + 1;
    }

    for (int k = words.size() - 1; k >= 0; k--)
    {
        result += words[k];

        if (k > 0)
            result += " ";
    }
    return result;
}

int main()

{
    string s = "the sky is blue";

    cout << reverseWords(s) << endl;

    // cout << s.size() << " " << s.length() << endl;
}