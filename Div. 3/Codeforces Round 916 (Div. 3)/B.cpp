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
    int n, k;
    cin >> n >> k;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) a[i] = i;
    reverse(begin(a)+k+1,end(a));
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    cout << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}