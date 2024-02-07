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
    int n,k;
    cin >> n >> k;
    vector<int> a(n+1);
    int op = 1;
    for (int i = 1; i <= k; i++) {
        if (i & 1) {
            for (int j = i; j <= n; j += k) {
                a[j] = op++;
            }
        } else {
            int len = n / k * k;
            if (len + i <= n) a[len+i] = op++;
            for (int j = len - k + i; j >= 1; j -= k) {
                a[j] = op++;
            }
        }
    }
    // 求a前缀和
    // vector<int> s(n+1);
    // for (int i = 1; i <= n; i++) {
    //     s[i] = s[i-1] + a[i];
    // }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
    // for (int i = k; i <= n; i++) {
    //     cout << s[i] - s[i-k] << ' ';
    // }
    // cout << endl;
    // cout << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}