#include<bits/stdc++.h> //博弈论 
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
	vector<int> a(n+1);
	for (int i = 1; i <= n; i++) cin >> a[i];
	int mina = 6666666, minw = 6666666;
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		mina = min(mina, a[i]);
		//前面至少有一个比a[i]小的 && a[i]必须小于前面的一个数 这个数的前面只有一个比这个数小的数
		if (mina < a[i] && a[i] < minw) 
		{
			minw = min(minw, a[i]); 
			res++;
		}
	}
	cout << res << endl;
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
