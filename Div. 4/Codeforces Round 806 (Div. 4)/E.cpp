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
    string g[n+1]; 
    for (int i = 1; i <= n; i++)
    {
        cin >> g[i];        
        g[i] = '?' + g[i];  
    }
    int res = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= (n + 1) / 2; j++)
        {
            int cnt[2] = {0};
            if (g[i][j] == '0') cnt[0]++;
            else cnt[1]++;
            if (g[n-j+1][i] == '0') cnt[0]++;
            else cnt[1]++;
            if (g[j][n-i+1] == '0') cnt[0]++;
            else cnt[1]++; 
            if (g[n-i+1][n-j+1] == '0') cnt[0]++;
            else cnt[1]++;
            // cout << cnt[0] << ' ' << cnt[1] << endl;
            if (cnt[0] == cnt[1]) res += 2;
            else if (cnt[0] == 1 || cnt[1] == 1) res++;
        }
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