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
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cout << (char) ('a' + m[a]++);
    }
    cout << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}