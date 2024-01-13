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
    int n;
    cin >> n;
    int l = 1, r = 1e9;
    set<int> t;
    for (int i = 1; i <= n; i++) {
        int op,x;
        cin >> op >> x;
        if (op == 1) l = max(l,x);
        else if (op == 2) r = min(r,x);
        else t.insert(x);
    }
    int ans = r - l + 1; 
    for (auto x : t) {
        if (x >= l && x <= r) ans--;
    }
    cout << max(ans,0LL) << endl;
}

RainRingBell {
    KyLen;
	Kshqsz;
	Kitto;
}