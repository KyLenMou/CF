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
    string s;
    cin >> s;
    s = "?" + s;
    bool flag = true;
    for (int i = 2; i <= n; i++) {
        if (s[i] < s[i-1]) {
            flag = false;
        }
    }
    if (flag) {
        cout << 0 << endl;
        return;
    }
    stack<char> stk;
    for (int i = 1; i <= n; i++) {
        while (stk.size() && stk.top() < s[i]) stk.pop();
        stk.push(s[i]);
    }
    vector<char> v;
    while (stk.size()) {
        v.push_back(stk.top());
        stk.pop();
    }
    int p = v.size() - 1;
    int d = 0;
    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] == v[i+1]) d++;
        else break;
    } 
    for (int i = 1; i <= n; i++) {
        if (s[i] == v[p]) {
            s[i] = v[v.size() - p - 1];
            p--;
            if (p < 0) break;
        }
    }
    for (int i = 2; i <= n; i++) {
        if (s[i] < s[i-1]) {
            cout << -1 << endl;
            return;
        }
    }
    cout << v.size() - 1 - d << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}