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
    vector<int> a(n+1),b(n+1),c(n+1); 
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    int maxc = -2000000001;
    for (int i = 1; i <= n; i++) 
    {
        c[i] = a[i] - b[i];
        maxc = max(maxc, c[i]); 
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (c[i] == maxc) cnt++;
    }
    cout << cnt << endl;
    for (int i = 1; i <= n; i++) 
    {
        if (c[i] == maxc) cout << i << ' ';
    }
    cout << endl;
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