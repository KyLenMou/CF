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
    vector<int> a(27);
    for (auto i : s) {
        a[i-'A'+1]++;
    }
    int ans = 0;
    for (int i = 1; i <= 26; i++) ans += a[i] >= i;
    cout << ans << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}