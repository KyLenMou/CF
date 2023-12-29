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
	string s;
	cin >> s;
	s = "?" + s;
	vector<int> b(n+1);
	for (int i = 1; i <= n; i++) b[i] = (s[i] != 'a' && s[i] != 'e');
	for (int i = 1; i <= n; i++) {
		cout << s[i];
		if (i <= n - 2 && !b[i] && b[i+1] && !b[i+2]) {
			cout << ".";
		}
		if (i != n && b[i] && b[i+1]) {
			cout << ".";
		}
	}
	cout << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}