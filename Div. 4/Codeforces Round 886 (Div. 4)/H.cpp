#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define int long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<long long,long long> PII;

const int N = 0;

void solve(){
	int n,m;
    cin >> n >> m;
    vector<PII> g[n+1];
    struct query
    {
        int a,b,c;
    } Q[m+1];
    
    for (int i = 1; i <= m; i++)
    {
        int a,b,c;
        cin >> a >> b >> c; 
        Q[i] = {a,b,c};
        g[a].push_back({b,c});
        g[b].push_back({a,-c});
    }
    
    vector<int> d(n+1);
    vector<bool> st(n+1);
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (st[i]) continue;
        q.push(i);
        while (q.size())
        {
            auto t = q.front();
            q.pop();
            st[t] = true;
            for (auto [x,y] : g[t])
            {
                if (st[x]) continue;
                q.push(x);
                d[x] = d[t] + y;
            }
        }
    }

    for (int i = 1; i <= m; i++)
    {
        if (Q[i].c != d[Q[i].b] - d[Q[i].a])
        {
            cout << "NO" << endl;
            return; 
        }
    }
    cout << "YES" << endl;
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