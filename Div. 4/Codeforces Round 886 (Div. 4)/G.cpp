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

const int N = 0;

void solve(){
	int n;
    cin >> n;
    unordered_map<ll,ll> m[5];
    for (int i = 1; i <= n; i++)
    {
        int a,b;
        cin >> a >> b; 
        m[1][a]++;
        m[2][b]++;
        m[3][a-b]++;
        m[4][a+b]++;
    }
    ll ans = 0;
    for (int i = 1; i <= 4; i++)
    {
        for (auto [x,y] : m[i])
        {
            ans += (ll) y * (y - 1);
        }
    }
    cout << ans << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}