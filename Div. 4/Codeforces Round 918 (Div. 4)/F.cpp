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
    vector<PII> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].x >> a[i].y;
    ranges::sort(a);
    vector<int> b(n);
    for (int i = 0; i < n; i++) b[i] = a[i].y;
    function<int(int,int)> merge = [&](int l, int r) {
        if (l == r) return 0LL;
        int mid = (l + r) / 2;
        int cur = 0;
        cur += merge(l,mid);
        cur += merge(mid+1,r);
        vector<int> temp;
        int p = l, q = mid + 1;
        while (p <= mid && q <= r) {
            if (b[p] <= b[q]) temp.push_back(b[p++]);
            else temp.push_back(b[q++]), cur += mid - p + 1;
        }
        while (p <= mid) temp.push_back(b[p++]);
        while (q <= r) temp.push_back(b[q++]);
        for (int i = l, j = 0; i <= r; i++) {
            b[i] = temp[j++];
        }
        return cur;
    };
    cout << merge(0,n-1) << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}