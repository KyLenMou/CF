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
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n+1),b(m+1);
    set<int> s1,s2;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] <= k) s1.insert(a[i]);
    }
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
        if (b[i] <= k) s2.insert(b[i]);
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= k; i++) {
        if (s1.count(i) == 0 && s2.count(i) == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    for (auto i : s1) {
        if (s2.count(i) == 0) cnt1++;
    }
    for (auto i : s2) {
        if (s1.count(i) == 0) cnt2++;
    }
    if (cnt1 > k / 2 || cnt2 > k / 2) cout << "NO" << endl;
    else cout << "YES" << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}