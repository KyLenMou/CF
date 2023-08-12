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
    vector<int> a(n+1); 
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(begin(a)+1,end(a));
    if (a[1] == a[n]) cout << -1 << endl;
    else
    {
        int p = 1; 
        while (p <= n && a[p] == a[1]) p++;
        cout << p - 1 << ' ' << n - p + 1 << endl;
        for (int i = 1; i < p; i++) cout << a[i] << ' ';
        cout << endl;
        for (int i = p; i <= n; i++) cout << a[i] << ' ';
        cout << endl;
    }
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