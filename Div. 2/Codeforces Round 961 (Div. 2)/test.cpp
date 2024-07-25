#include<bits/stdc++.h>
#define RainRingBell int32_t main()
#define KyLen ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define Kshqsz solve()
#define Kitto return 0
#define x first
#define y second
#define endl '\n'
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
#define int long long
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    for (int i = 2; i <= n; i++) {
        int a;
        cin >> a;
        m *= 2;
        if (m > a) {
            m -= a;
            cout << i << ' ';
        }
    }
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}
