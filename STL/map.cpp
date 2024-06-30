#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> m; // elements are stored in the form of key and value and in case of unordered map its random
    // all keys are unique and one key points to only one single value but vice versa is possible

    // insert,find,erase,count -> O(log n)
    // In case of unordered_map ->  insert,find,erase,count -> O(1)

    // m.insert(pair<int,int>(1,2));
    // m.insert(pair<int,int>(1,3));
    // m.insert(pair<int,int>(2,2));
    // m.insert(pair<int,int>(2,2));
    // m.insert(pair<int,int>(3,2));
    // m.insert(pair<int,int>(4,2));
    // auto it = m.find(1);

    // for(auto &value : m)

    // {
    //     cout << value.first << " " << value.second << endl;
    // }

    // cout << it->first << " " << it -> second <<endl;
    // return 0;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        m[s]++;
    }

    for (auto &value : m)
    {
        cout << value.first << " " << value.second << endl;
    }
}