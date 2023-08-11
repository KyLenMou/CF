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

const int N = 0;

void solve()
{
    int n;
    cin >> n;
    vector<PII> a(n+1);
    int num = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].x;
        a[i].y = i;
        num += a[i].x;
    }
    sort(begin(a) + 1, end(a));
    vector<int> s(n+1);
    for (int i = 1; i <= n; i++) s[i] = s[i-1] + a[i].x;
    vector<int> res(n+1);
    for (int i = 1; i <= n; i++)
    {
        res[a[i].y] = n + a[i].x * (2 * i - n) - s[i] + num - s[i];
    }
    for (int i = 1; i <= n; i++) cout << res[i] << ' ';
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