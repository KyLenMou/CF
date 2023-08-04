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

void solve(){
	int n,k;
    cin >> n >> k;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    int res = 0;
    for (int i = 1; i <= k; i++)
    {
        int m = a[i];
        for (int j = i + k; j <= n; j += k)
        {
            m = max(m,a[j]);
        }
        res += m;
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