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
    int n,q;
    cin >> n >> q;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(begin(a) + 1, end(a), greater<int>());
    for (int i = 1; i <= n; i++) a[i] += a[i-1];
    while (q--)
    {
        int x;
        cin >> x;
        auto idx = lower_bound(begin(a),end(a),x);
        if (idx == a.end()) cout << -1 << endl;
        else cout << idx - begin(a) << endl;
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