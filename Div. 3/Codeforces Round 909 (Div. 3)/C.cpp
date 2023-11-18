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
    vector<vector<int>> g;
    int a;
    cin >> a;
    vector<int> t,tt;
    t.push_back(a);
    for (int i = 2; i <= n; i++) {
        int pre = a;
        cin >> a;
        if (a & 1 && pre & 1 || !(a & 1) && !(pre & 1)) {
            g.push_back(t); 
            t = tt;
            t.push_back(a);
        } else {
            t.push_back(a);
        }
    } 
    g.push_back(t); 
    int ans = -1000000000;
    for (auto i : g) {
        if (i.size() == 1) {
            ans = max(ans,i[0]);
            continue;
        }
        int sum = -1000000000; 
        int temp = 0;
        for (auto j : i) {
            if (temp > 0) temp += j;
            else temp = j;
            if (temp > sum) sum = temp;
            // cout << j << ' ';
        }
        // cout << endl;
        ans = max(ans,sum);
    }
    cout << ans << endl;
}

int32_t main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}