#include<bits/stdc++.h>

using namespace std;

unordered_map<char,int> symbols = {{'(', -1}, {'{', -2}, {'[', -3},
                                    {')', 1}, {'}', 2},{']', 3}};

string isBalanced(string s)
{
    stack<char> stk;

    for(auto brackets : s)
    {
        if(symbols[brackets] < 0) //open bracket
        {
            stk.push(brackets);
        }

        else
        {
            if(stk.empty()) return "No";
            char top = stk.top();
            stk.pop();

            if(symbols[top] + symbols[brackets] != 0)
            {
                return "No";
            } 
        }
    }
    if(stk.empty()) return "Yes";
    return "No";

}

int main()
{
    int t; 

    cin >> t;

    while(t--)
    {
        string s;

        cin >> s;

        cout << isBalanced(s) << endl;
    }

    
    return 0;
}