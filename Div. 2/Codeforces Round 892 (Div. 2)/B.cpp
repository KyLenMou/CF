#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define int long long
// #define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve()
{
    int n;
    cin >> n;
    vector<PII> a(n+1); 
    int res = 0;
    int mina1 = 1e9, mina2 = 1e9;
    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        vector<int> b(m);
        for (auto &j : b) cin >> j;
        sort(begin(b),end(b));
        a[i].x = b[0], a[i].y = b[1];
        res += a[i].y;
        mina1 = min(mina1,a[i].x);
        mina2 = min(mina2,a[i].y);
    }
    res = res - mina2 + mina1;
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