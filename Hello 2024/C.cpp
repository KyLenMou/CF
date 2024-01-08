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
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<int> p,q;
    p.push_back(0);
    q.push_back(0);
    for (int i = 1; i <= n; i++) {
        int pp = a[i] <= p.back(), qq = a[i] <= q.back();
        if (pp == qq) {
            if (p.back() < q.back()) p.push_back(a[i]);
            else q.push_back(a[i]);
        }
        else if (pp) {
            p.push_back(a[i]);
        }
        else {
            q.push_back(a[i]);
        }
    }
    int ans = 0; 
    for (int i = 2; i < p.size(); i++) ans += p[i] > p[i-1];
    for (int i = 2; i < q.size(); i++) ans += q[i] > q[i-1];
    for (int i = 0; i < q.size(); i++) cout << q[i] << endl;
    cout << ans << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}