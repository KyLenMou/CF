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
	int n,k;
    cin >> n >> k; 
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    sort(begin(v)+1,end(v));
    int res = 0;
    int p = 2;
    while (p <= n)
    {
        int cnt = 1;
        while (p <= n && v[p] - v[p-1] <= k) p++,cnt++;
        res = max(res,cnt);
        p++;
    }
    cout << n - res << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}