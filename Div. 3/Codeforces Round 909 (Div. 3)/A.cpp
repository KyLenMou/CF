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

void solve()
{
    int n;
    cin >> n;
    if (n % 3 == 0) cout << "Second" << endl;
    else cout << "First" << endl;
}

int32_t main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}