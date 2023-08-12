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
    int res = 0;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) 
    {
        // cout << i << ' ' << i << ' ' << i * i << endl;
        // res += i * i;
        a[i] = i;
    }
    // int idx ;
    // cin >> idx;
    // reverse(begin(a)+idx,end(a));
    for (int idx = n / 2; idx <= n - 1; idx++)
    {
        int maxa = 0;
        int num = 0;
        for (int i = 1; i <= n; i++) 
        {
            vector<int> b = a;
            reverse(begin(b)+idx,end(b));
            // cout << i << ' ' << a[i] << ' ' << i * a[i] << endl;
            num += i * b[i];
            maxa = max(maxa,i * b[i]);
            // a[i] = i;
        }
        res = max(res, num - maxa);
    }
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