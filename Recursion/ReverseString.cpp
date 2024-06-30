#include <bits/stdc++.h>

using namespace std;

void reverseStringWithTwoPointers(string &str, int i, int j) // with 2 pointers
{
    cout << "Calls Received : " << str << endl;
    if (i > j)
        return;

    swap(str[i], str[j]);

    reverseStringWithTwoPointers(str, i + 1, j - 1);
}

void reverseStringWithSinglePointer(string &str, int i) // with single pointer
{
    cout << "Calls Received : " << str << endl;
    if (i > (str.length() + 1) / 2)
        return;

    swap(str[i], str[str.length() - 1 - i]);

    reverseStringWithSinglePointer(str, i + 1);
}
int main()
{
    string name = "abcdefg";
    string newName = "hijklmn";
    reverseStringWithTwoPointers(name, 0, name.length() - 1);
    cout << name << endl;

    // reverseStringWithSinglePointer(newName, 0);
    // cout << newName << endl;

    return 0;
}