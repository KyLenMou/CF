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
    string s;
    cin >> s;
    int l = 0, r = n - 1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'B') {
            l = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'B') {
            r = i;
            break;
        }
    }
    cout << r - l + 1 << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}