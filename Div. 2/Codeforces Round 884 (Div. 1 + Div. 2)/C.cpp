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
	ll n;
    cin >> n;
    vector<ll> v(n+1);
    ll maxv = -1e9;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        maxv = max(maxv,v[i]);
    }
    if (maxv < 0) cout << maxv << endl;
    else
    {
        ll r1 = 0, r2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i & 1) r1 += max(v[i],0ll);
            else r2 += max(v[i],0ll);
        }
        cout << max(r1,r2) << endl;
    }
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
} 