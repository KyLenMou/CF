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
    vector<int> a(n+1), s(n+1), f(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    s[1] = 1;
    s[2] = 2;
    for (int i = 3; i <= n; i++) {
        if (a[i] - a[i-1] < a[i-1] - a[i-2]) s[i] = s[i-1] + 1;
        else s[i] = s[i-1] + a[i] - a[i-1];
    }
    f[n] = 1;
    f[n-1] = 2;
    for (int i = n - 2; i >= 1; i--) {
        if (a[i+1] - a[i] < a[i+2] - a[i+1]) f[i] = f[i+1] + 1;
        else f[i] = f[i+1] + a[i+1] - a[i];
    }
    // for (int i = 1; i <= n; i++) {
    //     cout << s[i] << ' ';
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //     cout << f[i] << ' ';
    // }
    // cout << endl;
    
    int q;
    cin >> q;
    while (q--) {
        int l,r;
        cin >> l >> r;
        if (l < r) cout << s[r] - s[l] << endl;
        else cout << f[r] - f[l] << endl;
    }
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}