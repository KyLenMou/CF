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
    vector<int> a(n),b(n),c(n);
    vector<int> ai(n),bi(n),ci(n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    for (auto &i : c) cin >> i;
    iota(begin(ai),end(ai),0);
    iota(begin(bi),end(bi),0);
    iota(begin(ci),end(ci),0);
    // sort(begin(a),end(a));
    ranges::sort(ai,[&](int x, int y) {return a[x] < a[y];});
    ranges::sort(bi,[&](int x, int y) {return b[x] < b[y];});
    ranges::sort(ci,[&](int x, int y) {return c[x] < c[y];});
    int ans = 0;
    for (int i = n - 1; i >= n - 3; i--) 
        for (int j = n - 1; j >= n - 3; j--)
            for (int k = n - 1; k >= n - 3; k--) 
                if (ai[i] != bi[j] && bi[j] != ci[k] && ci[k] != ai[i]) 
                    ans = max(ans,a[ai[i]]+b[bi[j]]+c[ci[k]]);
                    
    cout << ans << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
} 