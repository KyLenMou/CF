// 单调栈
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
typedef pair<long long,long long> PII;

const int N = 0;

void solve(){
	int n,Q;
    cin >> n >> Q;
    vector<PII> stk(n+1);
    vector<int> cop(n+1);
    int tt = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        int temp = stk[tt].y + a;
        if (tt == 0 || a > stk[tt].x) stk[++tt] = {a,temp};
        else stk[tt].y += a;
    }
    for (int i = 1; i <= tt; i++) cop[i] = stk[i].x;
    while (Q--)
    {
        int q;
        cin >> q;
        if (q < stk[1].x)
        {
            cout << 0 << ' ';
            continue;
        }
        int l = 1, r = tt;
        while (l < r)
        {
            int mid = l + r + 1 >> 1;
            if (stk[mid].x <= q) l = mid;
            else r = mid - 1;
        }
        cout << stk[l].y << ' ';
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