#include<bits/stdc++.h>
#define x first
#define y second
#define endl '\n'
#define int long long
// #define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int k = 2;
    while (1) {
        for (int i = 1; i <= n; i++) {
            if (a[1] % k != a[i] % k) {
                cout << k << endl;
                return;
            }
        }
        k <<= 1;
    }
    // vector<bool> st(2);
    // int g;
    // for (int i = 1; i <= n; i++) {
    //     cin >> a[i];
    //     if (i == 1) g = a[1];
    //     st[a[i] & 1] = true;
    //     g = gcd(g,a[i]);
    // }
    // if (st[0] && st[1]) cout << 2 << endl;
    // else {
    //     int gg;
    //     st[0] = false;
    //     st[1] = false;
    //     for (int i = 1; i <= n; i++) {
    //         a[i] /= g;
    //         if (i == 1) gg = a[i];
    //         st[a[i] & 1] = true;
    //         gg = gcd(gg,a[i]);
    //     }
    //     if (st[0] && st[1]) cout << 2 * g << endl;
    //     else {
    //         sort(begin(a)+1,end(a));
    //         int d = a[2] * g - a[1] * g;
    //         for (int i = 3; i <= n; i++) {
    //             d = gcd(d,a[i] * g - a[i-1] * g);
    //         }
    //         cout << d * 2<< endl;
    //     }
    // }
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}