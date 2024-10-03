#include <iostream>
#include <vector>
using namespace std;
void DFS(vector<int> adj[], bool visited[], int v)
{
    visited[v] = true;
    cout << v << " ";
    for (int i = 0; i < adj[v].size(); i++)
    {
        if (!visited[adj[v][i]])
            DFS(adj, visited, i);
    }
}
int main()
{
    int vertices = 5;
    vector<int> adj[5];
    bool visited[5] = {false};
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);
    DFS(adj, visited, 0);
    return 0;
}
