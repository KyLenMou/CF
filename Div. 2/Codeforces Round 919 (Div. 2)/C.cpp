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
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            int g = 0;
            for (int j = i + 1; j <= n; j++) {
                g = gcd(g, a[j] - a[j-i]);
            }
            ans += (g != 1);
        }
    }
    cout << ans << endl;    
}

RainRingBell {
    KyLen;
	Kshqsz;
	Kitto;
}