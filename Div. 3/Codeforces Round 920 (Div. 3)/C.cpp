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
    int n,f,a,b;
    cin >> n >> f >> a >> b;
    int last = 0;
    for (int i = 1; i <= n; i++) {
        int cur;
        cin >> cur;
        f -= min((cur - last) * a, b);
        last = cur;
    }
    if (f <= 0) cout << "NO" << endl;
    else cout << "YES" << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}