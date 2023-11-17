#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
// #define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    auto min_idx = min_element(begin(a)+1,end(a)) - begin(a);
    for (int i = min_idx + 1; i <= n; i++) {
        if (a[i] < a[i-1]) {
            cout << -1 << endl;
            return;
        }
    }
    cout << min_idx - 1 << endl;
}

int32_t main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}