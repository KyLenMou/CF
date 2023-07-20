#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve(){
	int n,k;
	cin >> n >> k;
	unordered_map<int,int> m;
	vector<PQ(int)> res(k+1);
	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		if (m[a])
		{
			res[a].push(i-m[a]-1);
			m[a] = i;
		}
		else
		{
			res[a].push(i-1);          
			m[a] = i;            
		}    
	}
	for (auto [x,y] : m)
	{     
		res[x].push(n-y);
		// cout << x << ' ' << y << endl;
	}
	int ans = 1114514;
	for (int i = 1; i <= k; i++)
	{
		if (res[i].size() == 0) continue;
		int t = res[i].top();
		res[i].pop();
		// cout << t << ' ' << res[i].top() << endl;
		ans = min(ans,max(t/2,res[i].top()));
	}
	// cout << endl;
	cout << ans << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}