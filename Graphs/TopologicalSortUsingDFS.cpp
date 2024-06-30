#include <bits/stdc++.h>

void toposort(int node, vector<bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adjlist)
{
    visited[node] = 1;

    for (auto neighbour : adjlist[node])
    {
        if (!visited[neighbour])
        {
            toposort(neighbour, visited, s, adjlist);
        }
    }

    s.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    // Write your code here

    unordered_map<int, list<int>> adjlist; // for more optimization use vector<vector> instead of map

    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adjlist[u].push_back(v);
    }

    vector<bool> visited(v);
    stack<int> s;

    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            toposort(i, visited, s, adjlist);
        }
    }

    vector<int> ans;

    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    // return ans;

    return ans;
}