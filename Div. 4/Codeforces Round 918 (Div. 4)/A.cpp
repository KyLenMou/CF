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
    int a,b,c;
    cin >> a >> b >> c;
    if (a == b) cout << c << endl;
    else if (a == c) cout << b << endl;
    else cout << a << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}