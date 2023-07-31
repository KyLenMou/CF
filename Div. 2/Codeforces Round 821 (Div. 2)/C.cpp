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

void solve(){
	int n;
    cin >> n; 
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    cout << n - 1 << endl;
    cout << 1 << ' ' << n << endl;
    for (int i = 2; i < n; i++) 
    {
        if ((a[i] + a[1]) % 2 == 0) cout << i << ' ' << n << endl;
        else cout << 1 << ' ' << i << endl;
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