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

const int N = 0;

void solve()
{
	int m,k,a,b;
	cin >> m >> k >> a >> b;
	int cnt = 0;
	m -= min(b, m / k) * k;
	int t = ceil(double(m - min(a,m)) / k);
	if (m - t * k >= 0)
	{
		cnt += t;
		m -= t * k;
		m -= min(a,m);
		cnt += m;
	}
	else
	{
		t--;
		cnt += t;
		m -= t * k;
		m -= min(a,m);
		cnt += m;
	}
	cout << cnt << endl;
}

int32_t main()
{
	IOS;
	int T;
	cin >> T;
	//T = 1;
	while(T--) solve();
	return 0;
}