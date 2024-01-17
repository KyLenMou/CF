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
    set<int> a,b;
    for (int i = 1; i <= 4; i++) {
        int x,y;
        cin >> x >> y;
        a.insert(x);
        b.insert(y);
    }
    int p = 0, q = 0;
    for (auto x : a) {
        p += (p == 0 ? x : -x);
    }
    for (auto x : b) {
        q += (q == 0 ? x : -x);
    }
    cout << abs(q * p) << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}