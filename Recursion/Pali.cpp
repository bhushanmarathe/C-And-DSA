#include <bits/stdc++.h>

using namespace std;

bool checkStringPali(string &s, int i)
{
    if (i >= (s.length() / 2))
        return true;

    if (s[i] != s[s.length() - i - 1])
        return false;

    return checkStringPali(s, i + 1);
}

int main()
{
    string s;
    cin >> s;

    bool ans = checkStringPali(s, 0);

    cout << ans;
}