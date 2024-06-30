#include <bits/stdc++.h>

using namespace std;

class graph
{
    unordered_map<int, list<int>> adjList;

public:
    void addEdge(int u, int v, bool direction) // 0-> directed, 1 -> undirected
    {
        // create an edge from u to v
        adjList[u].push_back(v);

        if (direction == 0)
        {
            adjList[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adjList)
        {
            cout << i.first << "->";

            for (auto j : i.second)
            {
                cout << j << ",";
            }

            cout << endl;
        }
    }
};

int main()
{
    int n, m;
    cout << "Nodes : ";
    cin >> n;

    cout << "Edges : ";
    cin >> m;

    graph g;
    for (int i = 0; i < m; i++)
    {
        int u, v;

        cin >> u >> v;

        g.addEdge(u, v, 0);
    }

    g.printAdjList();
    return 0;
}