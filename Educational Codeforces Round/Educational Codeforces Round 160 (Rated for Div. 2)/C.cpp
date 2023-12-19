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
    int T1;
    cin >> T1;
    vector<int> b(30);
    while (T1--) {
        int TT, x;
        cin >> TT >> x;
        if (TT == 1) {
            b[x]++;
        } else {
            for (int i = 29; i >= 0; i--) {
                int a = 1 << i;
                int d = x / a;
                x -= min(d, b[i]) * a;
            }
            if (x == 0) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T = 1;
	while(T--) solve();
	return 0;
} 