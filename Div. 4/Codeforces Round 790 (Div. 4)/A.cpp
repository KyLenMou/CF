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
    int a = s[0] + s[1] + s[2] - '0' - '0' - '0', b = s[3] + s[4] + s[5]  - '0' - '0' - '0';
    if (a == b) cout << "YES" << endl;
    else cout << "NO" << endl;
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