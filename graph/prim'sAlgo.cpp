#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> adj[];
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> visited(V, false);
    int sum = 0;
    pq.push({0, 0});
    while (!pq.empty())
    {
        int wg = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if (visited[node])
        {
            continue;
        }
        visited[node] = true;
        sum += wg;
        for (auto ngb : adj[node])
        {
            int ngbNode = ngb[0];
            int wg = ngb[1];
            if (!visited[ngbNode])
            {
                pq.push({wg, ngbNode});
            }
        }
    }
    cout << sum;
    return 0;
}