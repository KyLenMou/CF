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
    int n;
    cin >> n;
    vector<int> g[n+1];
    for (int i = 2; i <= n; i++)
    {
        int a;
        cin >> a;
        g[i].push_back(a);
        g[a].push_back(i);
    }
    string s;
    cin >> s;
    vector<int> st(n+1);
    for (int i = 1; i <= n; i++)
    {
        st[i] = (s[i-1] == 'B');
    }
    vector<PII> cnt(n+1);
    vector<bool> vis(n+1);
    function<void(int)> dfs = [&](int u)
    {
        vis[u] = true;
        for (auto i : g[u])
        {
            if (vis[i]) continue;
            dfs(i);
            // cout << i << endl;
            cnt[u] = {cnt[i].x + cnt[u].x, cnt[i].y + cnt[u].y};
        }
        if (st[u]) cnt[u] = {cnt[u].x + 1, cnt[u].y};
        else cnt[u] = {cnt[u].x, cnt[u].y + 1};
    };

    dfs(1);
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i].x == cnt[i].y) res++;
    }
    cout << res << endl;
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