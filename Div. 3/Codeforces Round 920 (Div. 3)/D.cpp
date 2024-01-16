#include<bits/stdc++.h>
#define RainRingBell int32_t main()
#define KyLen ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define Kshqsz int T;cin >> T;while(T--) solve()
#define Kitto return 0
#define x first
#define y second
#define endl '\n'
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
#define int long long
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n+1), b(m+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    sort(begin(a)+1,end(a));
    sort(begin(b)+1,end(b),greater<int>());
    for (int i = 1; i <= n; i++) a[i] += a[i-1];
    for (int i = 1; i <= m; i++) b[i] += b[i-1];
    
    int ans = 0;

    for (int k = 0; k <= n; k++) {
        ans = max(a[0] - a[k] + b[k] + a[n] - a[k] - (b[m] - b[m- (n - k)]), ans);
    }
    
    cout << ans << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}