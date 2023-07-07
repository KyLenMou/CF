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
 
const int N = 2e5 + 10;
int v[N];
void solve(){
	int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> v[i];
    int ans = v[1];
    for (int i = 2; i <= n; i++) ans &= v[i];
    if (ans != 0)
    {
        cout << 1 << endl;
        return;
    }
    int p = 1;
    int res = 0;
    // cout << ans << endl;
    int t = v[1];
    while (p <= n)
    {
        t = v[p++];
        while (t != 0 && p <= n) t &= v[p++];
        if(t == 0) res++;
    }
    cout << (res == 0 ? 1 : res) << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}