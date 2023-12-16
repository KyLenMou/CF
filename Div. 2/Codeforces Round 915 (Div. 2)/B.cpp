#include<bits/stdc++.h>
#define x first
#define y second
#define endl '\n'
// #define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

void solve() {
    int n;
    cin >> n;
    map<int,int> v;
    for (int i = 1; i < n; i++) {
        int a,b;
        cin >> a >> b;
        v[a]++,v[b]++;
    }
    if (n <= 2) {
        cout << 1 << endl;
        return;
    }
    int res = 0;
    for (auto [x,y] : v) {
        if (y == 1) res++;
    }
    cout << (res + 1) / 2 << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}