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
	ll n;
	cin >> n;
	ll cnt = 0;
	map<string,ll> mm;
	map<ll,ll> m;
	for (int i = 1; i <= n; i++)
	{
		string a;
		cin >> a;
		if (a[0] > a[1]) swap(a[0],a[1]);
		cnt += m[a[0]] + (a[1] == a[0] ? 0 : m[a[1]]) - (a[0] == a[1] ? 1 : 2) * mm[a];
		// cout << a << endl;
		// cout << cnt << endl;
		mm[a]++;
		m[a[0]]++;
		if (a[0] != a[1]) m[a[1]]++;
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