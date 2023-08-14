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
    int n,k;
    cin >> n >> k;
    vector<int> a(n+1),b(n+1); 
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i - 1] = (2 * a[i] > a[i-1]);
    }
    b[0] = 0;
    for (int i = 1; i <= n; i++) 
    {
        b[i] += b[i-1];
        // cout << b[i] << ' ';
    }
    // cout << endl;
    int res = 0;
    for (int i = 1; i <= n - k; i++)
    {
        // cout << b[i + k - 1] - b[i - 1] << ' ';
        if (b[i + k - 1] - b[i - 1] == k) res++;
    }
    // cout << endl;
    cout << res << endl;
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