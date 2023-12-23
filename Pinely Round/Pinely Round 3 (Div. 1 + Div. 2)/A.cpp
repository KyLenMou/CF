#include<bits/stdc++.h>
#define x first
#define y second
#define endl '\n'
// #define int long long
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

void solve() {
    int n;
    cin >> n;
    vector<int> st(9);
    while (n--) {
        int x,y;
        cin >> x >> y;
        if (x > 0 && y > 0) st[1] = 1;
        else if (x == 0 && y > 0) st[2] = 1;
        else if (x < 0 && y > 0) st[3] = 1;
        else if (x < 0 && y == 0) st[4] = 1;
        else if (x < 0 && y < 0) st[5] = 1;
        else if (x == 0 && y < 0) st[6] = 1;
        else if (x > 0 && y < 0) st[7] = 1;
        else if (x > 0 && y == 0) st[8] = 1;
    }
    bool flag = false;
    if (!(st[5] || st[6] || st[7])) cout << "YES" << endl;
    else if (!(st[7] || st[8] || st[1])) cout << "YES" << endl;
    else if (!(st[1] || st[2] || st[3])) cout << "YES" << endl;
    else if (!(st[3] || st[4] || st[5])) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}