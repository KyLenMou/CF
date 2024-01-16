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
    string a,b;
    cin >> a >> b;
    a = "?" + a;
    b = "?" + b;
    int ol = 0, lo = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == '0' && b[i] == '1') ol++;
        if (a[i] == '1' && b[i] == '0') lo++;
    }
    cout << ol + max(0LL, lo - ol) << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}