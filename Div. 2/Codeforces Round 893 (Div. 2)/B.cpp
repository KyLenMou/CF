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
    int n,m,d;
    cin >> n >> m >> d;
    vector<int> a(m+2);
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i]; 
    }
    a[0] = 1 - d;
    a[m+1] = n + 1;
    int res = 0;
    for (int i = 1; i <= m + 1; i++)
    {
        res += (i != m + 1) + (a[i] - a[i-1] - 1) / d;
        // cout << (a[i] - a[i-1] - 1) / d << endl;
    }
    // cout << res << endl;
    map<int,int> mp;
    for (int i = 1; i <= m; i++)
    {
        int x = (a[i] - a[i-1] - 1) / d;
        int y = (a[i+1] - a[i] - 1) / d;
        int z = (a[i+1] - a[i-1] - 1) / d;
        int t = z - x - y - 1;
        mp[res+t]++;
    }
    PII ans = {1e9,0};
    for (auto [x,y] : mp)
    {
        if (x < ans.x) ans = {x,y}; 
    }
    cout << ans.x << ' ' << ans.y << endl;
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