#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define int long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve(){
	int n,k;
    cin >> n >> k;
    vector<int> cost(n+1), res(n+1,-1), g[n+1];
    for (int i = 1; i <= n; i++) cin >> cost[i];
    for (int i = 1; i <= k; i++)
    {
        int a;
        cin >> a;
        res[a] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        if (m == 0 && res[i] == -1) res[i] = cost[i];
        for (int j = 1; j <= m; j++)
        {
            int a;
            cin >> a;
            g[i].push_back(a);
        }
    }

    function<int(int)> dfs = [&](int u)
    {
        int ans = 0;
        for (auto i : g[u])
        {
            if (res[i] != -1) ans += res[i];
            else
            {
                int t = dfs(i);
                ans += t; 
                res[i] = t;
            }
        }
        return min(ans,cost[u]);
    };

    for (int i = 1; i <= n; i++)
    {
        if (res[i] != -1) continue;
        res[i] = dfs(i);
    }
    for (int i = 1; i <= n; i++) cout << res[i] << ' ';
    cout << endl;
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