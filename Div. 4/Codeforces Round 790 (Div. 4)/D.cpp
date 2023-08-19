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
    int g[n+1][m+1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> g[i][j];

    vector<int> a(n + m), b(n + m);
    for (int d = 1; d <= n + m - 1; d++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i > d + 1) break;
            for (int j = 1; j <= m; j++)
            {
                if (i + j - 1 == d) a[d] += g[i][j];
                if (j > d + 1) break;
            }
        }
    }
    for (int d = 1; d <= n + m - 1; d++)
    {
        for (int i = n; i >= 1; i--)
        { 
            if (n - i + 1 > d + 1) break;
            for (int j = 1; j <= m; j++)
            {
                if (n - i + 1 + j - 1 == d) b[d] += g[i][j];
                if (j > d + 1) break;
            }
        }
    }
    // for (int i = 1; i <= n + m - 1; i++) cout << a[i] << ' ';
    // cout << endl;
    // for (int i = 1; i <= n + m - 1; i++) cout << b[i] << ' ';
    // cout << endl;
    int res = 0;
    // for (int i = 1; i <= n + m - 1; i++)
    // { 
    //     for (int j = 1; j <= n + m - 1; j++)
    //     {
    //         res = max(res, a[i] + b[j] - g[]);
    //     }
    // }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            res = max(res,a[i + j - 1] + b[n - i + 1 + j - 1] - g[i][j]);
        }
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