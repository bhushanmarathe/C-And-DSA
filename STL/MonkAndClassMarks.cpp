#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int,multiset<string>> marks_map;

    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int marks;
        string name;

        cin >> name >> marks;

        marks_map[marks].insert(name);
    }

    cout << endl;

    auto &cur_it = --marks_map.end();

    while(true)
    {
        auto &studentName = (*cur_it).second;
        auto &studentMarks = (*cur_it).first;

        for(auto &student : studentName)
        {
            cout << student << " " << studentMarks << endl;
        }

        if(cur_it == marks_map.begin()) break;
        cur_it--;   
    }
    
}