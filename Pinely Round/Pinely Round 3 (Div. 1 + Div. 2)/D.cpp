#include<bits/stdc++.h>
#define x first
#define y second
#define endl '\n'
#define int long long
// #define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(begin(a)+1,end(a));
    if (a[1] == a[n]) {
        cout << 0 << endl;
        return;
    }
    // 中间
    if (a[1] <= k && k <= a[n] || ranges::find(a,k) != end(a)) {
        cout << -1 << endl;
        return;
    }
    int g = a[1] - k;
    for (int i = 1; i <= n; i++) {
        g = __gcd(g, a[i] - k);
    }
    int target = g + k;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += (a[i] - target) / g;
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