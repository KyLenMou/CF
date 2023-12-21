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
    vector<int> g[n+1], siz(n+1);
    for (int i = 2; i <= n; i++) {
        int a;
        cin >> a;
        g[a].push_back(i);
    }
    function<int(int)> initSiz = [&](int x) {
        siz[x] = 1;
        for (auto &son : g[x]) {
            siz[x] += initSiz(son);
        }
        return siz[x];
    };
    initSiz(1);

    function<int(int)> dfs = [&](int x) {
        int maxa = 0;
        for (auto &son : g[x]) {
            maxa = max(maxa,siz[son]);
        }
        if (maxa * 2 > siz[x] - 1) {
            for (auto &son : g[x]) {
                if (maxa == siz[son]) {
                    int num = dfs(son);
                    return num + min((siz[x] - 1 - 2 * num) / 2, siz[x] - 1 - maxa);
                }
            }
        } else {
            return (siz[x] - 1) / 2;
        }
    };
    cout << dfs(1) << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}