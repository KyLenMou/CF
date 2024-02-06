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
    vector<int> a(n+1),b(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i]; 
    b[n] = n+1;
    for (int i = n - 1; i >= 1; i--) {
        if (a[i] == a[i+1]) {
            b[i] = b[i+1];
        }
        else {
            b[i] = i + 1;
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int l,r;
        cin >> l >> r;
        if (b[l] > r) {
            cout << "-1 -1" << endl;
        } else {
            cout << l << ' ' << b[l] << endl;
        }
    }
    cout << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}