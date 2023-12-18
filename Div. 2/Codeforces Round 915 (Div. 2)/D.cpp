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
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int idx = find(begin(a) + 1, end(a), 0) - begin(a);
    // reverse(begin(a) + idx + 1, end(a));
    rotate(begin(a) + 1, begin(a) + idx + 1, end(a));
    // for (int i = 1; i <= n; i++) {
    //     cout << a[i] << ' ';
    // }
    // cout << endl;
    ll ans = 0, cur = 0;
    stack<pair<ll,ll>> stk;
    for (int i = 1; i < n; i++) {
        ll d = 0;
        while (stk.size() && stk.top().x > a[i]) cur -= stk.top().x * stk.top().y, d += stk.top().y, stk.pop();
        stk.push({a[i], d + 1});
        cur += a[i] * (d + 1);
        ans = max(ans, cur);
    }

    cout << ans + n << endl;

    // 6 7 2 3 1 5 4 0 : 0 0 0 0 0 0 0   8 

    // 7 2 3 1 5 4 0 6 : 0 0 0 0 0 0 6   8 
    // 2 3 1 5 4 0 6 7 : 0 0 0 0 0 6 7   8 
    // 3 1 5 4 0 6 7 2 : 0 0 0 0 2 2 2   8 
    // 1 5 4 0 6 7 2 3 : 0 0 0 2 2 2 3   8 
    // 5 4 0 6 7 2 3 1 : 0 0 1 1 1 1 1   8 
    // 4 0 6 7 2 3 1 5 : 0 1 1 1 1 1 5   8 
    // 0 6 7 2 3 1 5 4 : 1 1 1 1 1 4 4   8
        
    // 5 4 0 6 7 2 3 1 : 0 0 1 1 1 1 1   8 
    // 0 0 1 1 1 1 1

    // auto mex = [&](vector<int> p) {
    //     int q = 0;
    //     sort(begin(p),end(p));
    //     for (auto i : p) {
    //         if (q == i) q++;
    //         else return q;
    //     }
    //     return q;
    // };

    // for (int i = 1; i <= n; i++) {
    //     vector<int> p;
    //     for (int j = i; j < n + i; j++) cout << a[j] << ' ';
    //     cout << " : ";
    //     for (int j = i; j < n + i; j++) {
    //         p.push_back(a[j]);
    //         cout << mex(p) << ' ';
    //     }
    //     cout << endl;
    // }
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}