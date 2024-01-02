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
    int n,k,d;
    cin >> n >> k >> d;
    vector<int> a(n+1), b(k+1), s(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= k; i++) cin >> b[i];
    int ans = 0;
    for (int i = 1; i <= min(2*n,d); i++) {
        // 清空
        int temp = 0;
        for (int j = 1; j <= n; j++) {
            if (a[j] + s[j] == j) temp++;
        }
        temp += (d - i) / 2;
        ans = max(ans,temp);
        // 累加
        for (int j = 1, t = i%k; j <= b[t==0?k:t]; j++) {
            s[j]++;
        }
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