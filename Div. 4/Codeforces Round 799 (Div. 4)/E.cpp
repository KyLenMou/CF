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
    int n,s;
    cin >> n >> s;
    vector<int> a(n+1),b(n+1); 
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        a[i] += a[i-1];
    }
    int res = 666666666;
    int r = 1;
    for (int i = 1; i <= n; ++i) 
    {
        while (r < n && a[r + 1] - a[i - 1] <= s) r++;
        if (a[r] - a[i - 1] == s) 
        	res = min(res, n - (r - i + 1));
    }
    cout << (res == 666666666 ? -1 : res) << endl;
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