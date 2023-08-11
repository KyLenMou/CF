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
    map<int,int> m; //在这里如果使用unordered_map会超时
    for (int i = 1; i <= n; i++) 
    {
        int a;
        cin >> a;
        m[a]++;
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int x,y;
        cin >> x >> y;
        int t = x * x - 4 * y;
        int st = sqrt(t);
        if (t < 0 || st * st != t)
        {
            cout << 0 << ' ';
            continue;
        }
        if (t == 0)
        {
            x /= 2;
            cout << m[x] * (m[x] - 1) / 2 << ' ';
            continue;
        }
        int a = (x + st) >> 1, b = (x - st) >> 1;
        cout << m[a] * m[b] << ' ';
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