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
    int n,Q;
    cin >> n >> Q;
    int M = 317;
    vector<int> a(n+1);
    vector<vector<int>> pre(M+1, vector<int>(n+1)), sum(M+1, vector<int>(n+1));
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int d = 1; d <= M; d++) {
        for (int i = 1; i <= n; i++) {
            pre[d][i] = pre[d][max(0LL, i - d)] + a[i];
            sum[d][i] = sum[d][max(0LL, i - d)] + a[i] * ((i + d - 1) / d);
        }
    }

    while (Q--) {
        int s,d,k;
        cin >> s >> d >> k;
        int l = s, r = s + d * (k - 1);
        if (d > M) {
            int ans = 0;
            for (int i = 1; i <= k; i++) {
                ans += a[s + (i - 1) * d] * i;
            }
            cout << ans << ' ';
        }
        else cout << sum[d][r] - sum[d][max(0LL,l-d)] - ((l + d - 1) / d - 1) * (pre[d][r] - pre[d][max(0LL,l-d)]) << ' ';
    }
    cout << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}