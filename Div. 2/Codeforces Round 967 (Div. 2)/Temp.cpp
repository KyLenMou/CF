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
    for (int i = 1, a = 1, last = 0; a <= 1e18; i++) {
        int t = (a + (i * 2 + 1)) * 2;
        cout << i << " : " << t << endl;
        a = t;
    }
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}
