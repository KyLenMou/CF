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
    vector<string> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    int res = 999999999;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int t = 0;
            for (int k = 0; k < m; k++)
            {
                t += abs(a[i][k] - a[j][k]);
            }
            res = min(res,t); 
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