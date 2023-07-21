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
	ll n,cc;
    cin >> n >> cc;
    ll c = cc;
    ll b = 0;
    for (int i = 1; i <= n; i++)
    {
        ll t;
        cin >> t; 
        c -= t * t;
        b += t; 
    }
    b *= 4;
    c = -1 * c;
    ll a = 4 * n;
    ll res1 = (-1 * b / 2 / a) + sqrt((double)b / 4 / a * b / a - c / a);
    ll res2 = (-1 * b / 2 / a) - sqrt((double)b / 4 / a * b / a - c / a);
    // cout << a << ' ' << b << ' ' << c << endl;
    // cout << (-1 * b / 2 / a) << ' ' << b / 4 / a * b / a - c / a << endl;
    cout << max(res1,res2) << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
} 