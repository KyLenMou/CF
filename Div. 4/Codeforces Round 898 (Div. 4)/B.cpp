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
    vector<ll> a(n+1);
    int cnt0 = 0;
    ll res = 1;
    ll mina = 10;
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        if (a[i] == 0) cnt0++;
    }
    sort(begin(a)+1,end(a));
    if (cnt0 > 1) cout << 0 << endl;
    else
    {
        a[1]++;
        for (int i = 1; i <= n; i++) res *= a[i];
        cout << res << endl;
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