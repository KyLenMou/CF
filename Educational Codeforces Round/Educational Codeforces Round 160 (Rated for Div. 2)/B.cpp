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
    string s;
    cin >> s;
    int n = s.size();
    s = '?' + s;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    int i = 1, j = 2;
    vector<bool> st(n+1, false);
    while (j <= n) {
        while (j <= n && s[i] == s[j]) j++;
        if (j <= n) 
        {
            st[j++] = true; 
            i++;
            while (i <= n && st[i]) {
                i++; 
            }
        }
    }
    cout << n - i + 1 << endl;
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
} 