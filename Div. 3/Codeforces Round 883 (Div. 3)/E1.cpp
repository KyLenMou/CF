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

const int N = 1e7;
bool st[N];
void init()
{
    for (ll k = 2; k <= 1000; k++)
    {
        ll cur = 1 + k;
        ll t = k; 
        for (int i = 1; i <= 20; i++)
        {
            cur += t * k;
            t *= k;
            if (cur > 1000000) break;
            st[cur] = true;
        }
    }
}

void solve(){
	int n;
    cin >> n; 
    cout << (st[n] ? "YES" : "NO") << endl;
}

int main()
{
	IOS;
    init();
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}