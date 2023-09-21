#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve()
{
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n+2);
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(begin(a) + 1, end(a) - 1);
    ll cur = 0;
    for (int i = 1; i <= n; i++)
    {
        while (a[i] == a[i+1] && i <= n) 
        {
            i++;
        }
        // cout << i << ' ' << cur << endl;
        if (cur + i > m) 
        {
            cout << a[i] << endl;
            return;
        }
        else 
        {
            if (i != n)
            {
                int h = a[i+1] - a[i];
                int d = m - cur;
                // for (int j = 1; j <= d; j++)
                // {
                //     if (cur + i <= m) cur += i;
                //     else 
                //     {
                //         cout << a[i] + j - 1 << endl;
                //         return;
                //     }
                // }
                if (i * h <= d) cur += i * h;
                else
                {
                    cout << a[i] + d / i << endl;
                    return;
                }
            }
            else
            {
                // int d = 0;
                // while (cur + i <= m) cur += i, d++;
                // cout << a[i] + d << endl;
                int d = m - cur;
                if (d <= 0) cout << a[i] << endl;
                else cout << a[i] + d / i << endl;
                return;
            }
        }
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