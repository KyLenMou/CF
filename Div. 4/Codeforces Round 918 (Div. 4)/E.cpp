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
    for (int i = 1; i <= n; i++) cin >> a[i];
    int pre = 0;
    set<int> se;
    se.insert(0);
    for (int i = 1; i + 1 <= n; i += 2) {
        pre += a[i] - a[i+1];
        if (se.count(pre) || i + 2 <= n && se.count(pre + a[i+2])) {
            cout << "YES" << endl;
            return;
        }
        se.insert(pre);
    }
    se.clear();
    se.insert(0);
    pre = 0;
    for (int i = 2; i + 1 <= n; i += 2) {
        pre += a[i] - a[i+1];
        if (se.count(pre) || i + 2 <= n && se.count(pre + a[i+2])) {
            cout << "YES" << endl;
            return;
        }
        se.insert(pre);
    }
    cout << "NO" << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}