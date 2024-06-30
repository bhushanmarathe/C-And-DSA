#include <bits/stdc++.h>

using namespace std;

string reverseWordsInString(string s)
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
}

int main()

{
    string s = "the sky is blue";

    cout << reverseWordsInString(s) << endl;

    // cout << s.size() << " " << s.length() << endl;
}