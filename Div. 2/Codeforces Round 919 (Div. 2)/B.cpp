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
    int n,k,x;
    cin >> n >> k >> x;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(begin(a)+1,end(a));
    for (int i = 1; i <= n; i++) {
        a[i] += a[i-1];
    }
    int ans = -1e9;
    for (int i = 0; i <= k; i++) {
        ans = max(ans,a[max(0LL,n-i-x)] - (a[n-i] - a[max(0LL,n-i-x)]));
    }
    cout << ans << endl;
}

RainRingBell {
    KyLen;
	Kshqsz;
	Kitto;
}