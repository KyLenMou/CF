#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 1010;
int g[N][N];
void solve(){
	int n,k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> g[i][j];
        }
    }
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    int cnt = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (g[i][j] != g[n-i+1][n-j+1]) cnt++;
        }
    }
    if (n&1)
    {
        for (int i = 1; i <= n / 2; i++) 
            if (g[n/2+1][i] != g[n/2+1][n-i+1]) cnt++;
    }
    if (n & 1)
    {
        if (cnt > k) cout << "NO" << endl;
        else cout << "YES" << endl;
        return;
    }
    if (cnt > k) cout << "NO" << endl;
    else
    {
        if ((k - cnt) % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    // cout << cnt << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
} 