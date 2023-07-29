#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
// #define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
#define db(x) {for (auto i : x) { cout << i << ' '; } cout << endl;}
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n+1);
    vector<int> dp(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    bool v0 = false, v1 = false, v2 = false;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 1) v1 = true, dp[i] = dp[i-1];
        else if (v[i] == 2) v2 = true, dp[i] = dp[i-1];
        else
        {
            if (v0)
            {
                if (v2) v0 = v1 = v2 = false;
                dp[i] = dp[i-1] + 1;
            }
            else
            {
                if (v1 || v2) dp[i] = dp[i-1] + 1, v1 = v2 = false;
                else v0 = true, dp[i] = dp[i-1];
            }
        }
    }
    cout << dp[n] + (v[n] || v0) << endl;
}

int32_t main()
{
	IOS;
	int T;
	// cin >> T;
	T = 1;
	while(T--) solve();
	return 0;
}