//卡数据范围
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
	int n,q;    
    cin >> n >> q;
    vector<PII> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i].x >> v[i].y;
    }
    sort(begin(v)+1,end(v));
    short g1[1001][1001], g2[1001][1001];
    for (int i = 1; i <= 3; i++)
    {
        int l = 1, r = n;
        // while (l < r)
        // {
        //     int mid = l + r >> 1;
        //     if (v[mid].x > i) r = mid;
        //     else l = mid + 1; 
        // }
        cout << l;
        // for (int j = 1; j <= 1000; j++)
        // {
            
        // }
    }
    while (q--)
    {
        int res = 0;
        int a,b,c,d;
        cin >> a >> b >> c >> d;

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