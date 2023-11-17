#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define int long long
// #define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
#define double long double
using namespace std;
typedef pair<int,int> PII;

void solve()
{
    int n;
    cin >> n;
    vector<double> a(n+1);
    map<pair<int,int>,int> m;
    vector<int> st(n+1,0);
    for (int i = 1; i <= n; i++)  {
        cin >> a[i];
        double t = log2l(a[i]);
        if (t - (int) t == 0) m[{t-a[i],0}]++;
        else m[{a[i],1}]++,st[i] = 1;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (st[i] == 1) {
            m[{a[i],1}]--;
            ans += m[{a[i],1}];
        }
        else {
            double t = log2l(a[i]);
            m[{t-a[i],0}]--;
            ans += m[{t-a[i],0}];
        }
    }
    cout << ans << endl;
}

int32_t main()
{
	// IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}