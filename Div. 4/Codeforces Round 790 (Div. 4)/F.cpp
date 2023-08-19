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
    int n,k;
    cin >> n >> k;
    map<int,int> m; 
    for (int i = 1; i <= n; i++) 
    {
        int a;
        cin >> a;
        m[a]++;
    }
    vector<PII> a;
    a.push_back({0,0});
    for (auto i : m) a.push_back(i);
    n = a.size() - 1;
    PII res;
    int maxr = 0;
    for (int i = 1; i <= n; i++)
    {
        // cout << a[i].x << endl;
        if (a[i].y < k) continue;
        int j = i + 1;
        while (a[j].x == a[j-1].x + 1 && a[j].y >= k && j <= n)
        {
            j++;
            // cout << a[i].x << ' ' << a[i-1].x << endl;
        } 
        if (j - i > maxr)
        {
            maxr = j - i;
            res = {a[i].x, a[j-1].x};
        }
        i = j - 1;
    }
    if (maxr == 0) cout << -1 << endl;
    else cout << res.x << ' ' << res.y << endl;
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