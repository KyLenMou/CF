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
    vector<int> a(2 * n + 2),st(n+1),b(n+1);
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        st[a[i]] = 1;
    }
    int t;
    for (int i = 0; i <= n; i++)
    {
        if (st[i] != 1) t = i;
    }
    a[0] = t;
    k = k % (n + 1);

    for (int i = 0; i <= n; i++)
    {
        a[i + n + 1] = a[i];
    }

    for (int i = n + 2 - k; i <= 2 * n + 2 - k - 1; i++)
    {
        cout << a[i] << ' ';
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