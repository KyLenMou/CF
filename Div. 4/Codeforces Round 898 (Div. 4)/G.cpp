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
    string s;
    cin >> s;
    int n = s.size();
    s = '?' + s;
    vector<int> d;
    map<int,int> se;
    for (int i = 1; i <= n; i++) se[s[i]]++;
    if (se.size() == 1) 
    {
        cout << 0 << endl; 
        return;
    }
    int p = 1;
    while (p <= n)
    {
        int cnt = 0;
        while (p <= n && s[p] == 'A') p++,cnt++;
        while (p <= n && s[p] == 'B') p++;
        d.push_back(cnt);
    }
    if (s[n] == 'B') d.push_back(0);
    sort(begin(d),end(d));
    int res = 0;
    // for (auto i : d) cout << i << ' ';
    // cout << endl;
    if (d[0] != 0 && se['B'] < d.size())
    {
        for (int i = 1; i < d.size(); i++) res += d[i];
    }
    else
    {
        for (int i = 0; i < d.size(); i++) res += d[i];
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