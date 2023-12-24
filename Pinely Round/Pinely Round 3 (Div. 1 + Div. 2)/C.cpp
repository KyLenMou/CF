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
    vector<int> l(n+1),r(n+1),c(n+1),num;
    for (int i = 1; i <= n; i++) cin >> l[i];
    for (int i = 1; i <= n; i++) cin >> r[i];
    for (int i = 1; i <= n; i++) cin >> c[i];
    sort(begin(l)+1,end(l));
    sort(begin(r)+1,end(r));
    sort(begin(c)+1,end(c),greater());

    stack<int> s;
    int i = 1, j = 1;
    while (i <= n) {
        while (i <= n && r[j] > l[i]) s.push(l[i++]);
        num.push_back(r[j] - s.top());
        s.pop();
        j++;
    }
    while (s.size()) {
        num.push_back(r[j] - s.top()); 
        s.pop();
        j++;
    }
    ranges::sort(num);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += num[i-1] * c[i];
    }
    cout << ans << endl;
    
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
} 