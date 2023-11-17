#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define int long long
// #define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i-1];
    }
    int res = 0; 
    for (int p = 1; p <= n / 2; p++) {
        if (n % p == 0) {
            int mina = 1000000000000000000, maxa = 0;
            for (int i = p; i <= n; i += p) {
                mina = min(mina, a[i] - a[i-p]);
                maxa = max(maxa, a[i] - a[i-p]);
            }
            res = max(res,maxa - mina);
        }
    }
    cout << res << endl;
    
}

int32_t main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
} 