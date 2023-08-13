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
    int n;
    cin >> n;
    vector<PII> e(n+1);
    for (int i = 1; i <= n; i++) 
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        e[i] = {a,d};
    } 
    sort(begin(e) + 1, end(e));

    //区间合并
    vector<int> L,R;
    int l = e[1].x, r = e[1].y;
    for (int i = 1; i <= n; i++)
    {
        if (e[i].x <= r) r = max(e[i].y,r);
        else
        {
            L.push_back(l), R.push_back(r);
            l = e[i].x, r = e[i].y;
        }
    }
    L.push_back(l);
    R.push_back(r);
    
    int Q;
    cin >> Q;
    while (Q--)
    {
        int x;
        cin >> x;
        int idx = lower_bound(begin(R),end(R),x) - begin(R);
        if (x < L[idx] || begin(R) + idx == end(R)) cout << x << ' ';
        else cout << R[idx] << ' ';
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