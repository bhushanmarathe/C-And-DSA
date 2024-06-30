#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s; // stores unique elements and in sorted order

    // insert,find,erase,count -> O(log n)
    // size,begin,end,empty  -> O(1)

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++; // used in case of erase

    cout << "5 is present or not: " << s.count(5);

    cout << endl;

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}