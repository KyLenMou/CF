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
    string s;
    cin >> s;
    s = "?" + s;
    int cnt = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (s[i] != s[n - i + 1]) cnt++;
    }
    vector<bool> st(n+1,false);
    st[cnt] = true;
    for (int i = 1; i <= (n / 2) - cnt; i++)
    {
        st[cnt + i * 2] = true;
    }
    if (n & 1)
    {
        for (int i = n; i >= 1; i--)
        {
            if (st[i - 1]) st[i] = true;
        }
    }
    for (auto i : st) 
    {
        if (i) cout << 1;
        else cout << 0;
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