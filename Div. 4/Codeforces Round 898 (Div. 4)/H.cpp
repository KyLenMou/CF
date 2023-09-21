#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
// #define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;



void solve()
{
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> g[n+1];
    for (int i = 1; i <= n; i++)
    {
        int l,r;
        cin >> l >> r;
        g[l].push_back(r);
        g[r].push_back(l);
    }
        
    vector<bool> visited(n+1, false); // 记录节点是否已访问过
    vector<int> parent(n+1, -1); // 记录DFS遍历中每个节点的父节点
    int startNode = -1; // 记录环的起始节点
    int endNode = -1; // 记录环的结束节点
    
    auto findShortestDistance = [&](int a, int b) {
        queue<pair<int, int>> q; // 队列存储节点和距离
        q.push({a, 0}); // 将起始节点和距离0加入队列
        vector<bool> visited(n+1, false);
        visited[a] = true;

        while (!q.empty()) {
            int node = q.front().first;
            int distance = q.front().second;
            q.pop();

            if (node == b) {
                return distance;
            }

            for (int neighbor : g[node]) {
                if (!visited[neighbor]) {
                    q.push({neighbor, distance + 1});
                    visited[neighbor] = true;
                }
            }
        }

        return -1; // 如果未找到路径，返回-1
    };
    function<bool(int,int)> findCycle = [&](int node, int p) {
        visited[node] = true;
        for (int neighbor : g[node]) {
            if (!visited[neighbor]) {
                parent[neighbor] = node;
                if (findCycle(neighbor, node)) {
                    return true;
                }
            } else if (neighbor != p && neighbor != startNode) {
                // 如果找到了回到非父节点的边，说明找到环
                endNode = node;
                startNode = neighbor;
                return true;
            }
        }
        return false;
    };
    // 找到图中的环
    for (int i = 1; i <= n; i++) {
        if (!visited[i] && findCycle(i, -1)) {
            break;
        }
    }

    // 找到点c
    int c = -1;
    int minDistanceToCycle = min(findShortestDistance(a, startNode), findShortestDistance(b, startNode));

    // 寻找距离环最近的点c
    for (int i = 1; i <= n; i++) {
        if (i != startNode && i != endNode) {
            int distanceToStart = findShortestDistance(i, startNode);
            int distanceToEnd = findShortestDistance(i, endNode);
            if (distanceToStart + distanceToEnd == minDistanceToCycle) {
                c = i;
                break;
            }
        }
    }

    // 计算点a到点c和点b到点c的距离
    int distanceAtoC = findShortestDistance(a, c);
    int distanceBtoC = findShortestDistance(b, c);

    if (distanceAtoC >= distanceBtoC) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int32_t main()
{
	IOS;
	int T;
	cin >> T;
	//T = 1;
	while(T--) solve();
	return 0;
}