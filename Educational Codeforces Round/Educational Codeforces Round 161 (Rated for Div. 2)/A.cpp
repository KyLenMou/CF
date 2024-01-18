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
    string a,b,c;
    cin >> n >> a >> b >> c;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (a[i] != c[i] && b[i] != c[i]) flag = true;
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}