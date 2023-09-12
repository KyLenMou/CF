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
//1 2 3 4
//
void solve()
{
    int n;
    cin >> n;
    vector<PII> a(n+1);
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i].x;
        a[i].y = i;
    }
    sort(begin(a)+1,end(a));
    vector<int> res(n+1);
    int t = n;
    for (int i = 1; i <= n; i++)
    {
        res[a[i].y] = t--;
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