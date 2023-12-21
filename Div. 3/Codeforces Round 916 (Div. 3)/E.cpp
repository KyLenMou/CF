#include<bits/stdc++.h>
#define x first
#define y second
#define endl '\n'
#define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n),b(n),o(n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    
    iota(begin(o),end(o),0);
    // hsknb
    ranges::sort(o, [&](int x, int y) {
        return a[x] + b[x] > a[y] + b[y];
    });

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i & 1) {
            ans -= b[o[i]] - 1;
        } else {
            ans += a[o[i]] - 1;
        }
    }

    cout << ans << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}