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
	int n;
	cin >> n;
	map<int,int> m; 
	while (n--)
	{
		int a;
		cin >> a;
		m[a]++;
	}
	for (auto [x,y] : m)
	{
		if (y >= 3) 
		{
			cout << x << endl;
			return;
		}
	}
	cout << -1 << endl;
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