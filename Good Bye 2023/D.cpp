#include<bits/stdc++.h>
#define x first
#define y second
#define endl '\n'
#define int long long
// #define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    if (n == 3) {
        cout << 169 << endl << 196 << endl << 961 << endl;
        return;
    }
    auto f = [&](int a, int b) {
        int d = 0;
        for (int i = 1; i <= n / 2; i++) {
            cout << a;
            for (int j = 1; j <= d; j++) cout << 0;
            cout << 6;
            for (int j = 1; j <= d; j++) cout << 0;
            cout << b;
            for (int j = 1; j <= n-3 - d * 2; j++) cout << 0;
            cout << endl;
            d++;
        }
    };
    f(1,9);
    f(9,1);
    cout << "196" << string(n-3,'0') << endl;


}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}