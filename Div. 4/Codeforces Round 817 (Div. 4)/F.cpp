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
    int n,m;
    cin >> n >> m;
    string g[n+1];
    int st[n+1][m+1] = {0};
    for (int i = 1; i <= n; i++) 
    {
        cin >> g[i];
        g[i] = '0' + g[i];
    }
    int idx = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (g[i][j] == '*' && st[i][j] == 0)
            {
                st[i][j] = idx;
                int cnt = 0;
                
            }
        }
    }
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