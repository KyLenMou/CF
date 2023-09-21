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
    int n,m;
    cin >> n >> m;
    vector<int> a(n+1),h(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> h[i];
    vector<PII> p;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        while (i < n && h[i] % h[i+1] == 0) i++;
        p.push_back({x,i});
    }
    int maxlen = 0;
    for (auto [l,r] : p) 
    {
        int len = r - l + 1;
        vector<int> s(len+1);
        for (int i = 1, idx = l; i <= len; i++,idx++)
        {
            s[i] = s[i-1] + a[idx];
        }
        for (int i = 1; i <= len; i++)
        {
            int ll = i-1, rr = len;
            while (ll < rr)
            {
                int mid = ll + rr + 1 >> 1;
                if (s[mid] - s[i-1] > m) rr = mid - 1;
                else ll = mid;
            }
            // cout << "i,ll:" <<  i << ' ' << ll << endl;
            maxlen = max(maxlen,ll-i+1);
        }
    }
    cout << maxlen << endl;
    
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