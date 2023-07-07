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
	int t;
	cin >> t;
	vector<int> v(n-1);
	for (int i = 0; i < n - 1; i++)
	{
		cin >> v[i];
		int temp = v[i];
		v[i] -= t;
		v[i] = abs(v[i]);
		t = temp;
	}
	sort(v.begin(),v.end());
	int res = 0;
	for (int i = 0; i < n - k; i++) res += v[i];
	cout << res << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}