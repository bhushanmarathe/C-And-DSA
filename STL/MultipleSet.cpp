#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<string> s;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;

        cin >> str;

        s.insert(str);
    }

    cout << endl;

    for (auto i : s)
    {
        cout << i << endl;
    }

    return 0;
}