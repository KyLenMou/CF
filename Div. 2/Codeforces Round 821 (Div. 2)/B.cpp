#include<bits/stdc++.h>
// #define x first
// #define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
// #define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve(){
	int n,x,y;
    cin >> n >> x >> y;
    if (x * y > 0 || x == 0 && y == 0)
    {
        cout << "-1" << endl;
        return;
    }
    x = max(x,y);
    n -= 1;
    // cout << n << ' ' << x << endl;
    if ((n % x) != 0)  
    {
        cout << "-1" << endl;
        return;
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 2; i <= n + 1; i += x)
    {
        int t = x;
        while (t--) cout << i << ' ';
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