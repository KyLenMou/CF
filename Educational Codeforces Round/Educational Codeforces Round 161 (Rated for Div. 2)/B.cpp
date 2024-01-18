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
    map<int,int> m;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        m[a]++;
    }
    int last = -1;
    int cnt = 0;
    int ans = 0;
    for (auto [x,y] : m) {
        // cout << x << ' ' << y << endl;
        if (y >= 3) {
            ans += y * (y - 1) * (y - 2) / 6;
        }
        if (y >= 2 && last != -1) {
            ans += y * (y - 1) / 2 * cnt;
        }
        last = x;
        cnt += y;
    }
    cout << ans << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
} 