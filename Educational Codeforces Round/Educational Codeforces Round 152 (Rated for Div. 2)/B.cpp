#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

void solve(){
	int n,k;
    cin >> n >> k;
    struct e
    {
        int a,b;
    };
    vector<e> res;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        a %= k;
        if (a == 0) cout << i << ' ';
        else res.push_back({a,i});
    }
    auto cmp = [&](e e1, e e2)
    {
        if (e1.a == e2.a) return e1.b < e2.b;
        return e1.a > e2.a;
    };
    sort(res.begin(),res.end(),cmp);
    for (auto ee : res) cout << ee.b << ' ';
    cout << endl;
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