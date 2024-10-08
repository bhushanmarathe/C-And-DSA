#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> maxi; // map heap

    priority_queue<int, vector<int>, greater<int>> mini; // min heap

    maxi.push(1);

    maxi.push(4);
    maxi.push(0);
    maxi.push(5);

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }

    cout << endl;

    mini.push(1);

    mini.push(4);
    mini.push(0);
    mini.push(5);

    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }

    cout << endl;

    cout << "Is queue Empty: " << mini.empty();
}