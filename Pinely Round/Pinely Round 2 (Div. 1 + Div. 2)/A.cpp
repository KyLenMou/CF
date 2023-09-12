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
    int n,a,q;
    cin >> n >> a >> q;
    string s;
    cin >> s;
    s = '0' + s; 
    int cnt = 0;
    int t = a;
    if (n == a)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 1; i <= q; i++)
    {
        if (s[i] == '-') cnt--;
        else cnt++,t++; 
        if (cnt + a == n)
        {
            cout << "YES" << endl;
            return;
        } 
    }
    if (cnt + a >= n) 
    {
        cout << "YES" << endl;
        return;
    }
    if (t >= n)
    {
        cout << "MAYBE" << endl;
        return;
    }
    cout << "NO" << endl;
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