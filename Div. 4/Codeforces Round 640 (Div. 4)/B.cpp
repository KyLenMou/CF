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
    if (k > n)
    {
        cout << "NO" << endl;
        return;
    }
    if ((n - (k - 1)) % 2 == 1 && (n - (k - 1)) > 0)
    {
        cout << "YES" << endl;
        for (int i = 1; i <= k - 1; i++) cout << 1 << ' ';
        cout << n - k + 1 << endl;
        return;
    }
    if ((n - (k - 1) * 2) % 2 == 0 && (n - (k - 1) * 2) > 0)
    {
        cout << "YES" << endl;
        for (int i = 1; i <= k - 1; i++) cout << 2 << ' ';
        cout << n - (k - 1) * 2 << endl;
        return;
    }
    cout << "NO" << endl;
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