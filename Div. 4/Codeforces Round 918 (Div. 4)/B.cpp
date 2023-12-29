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
    string s[4];
    cin >> s[1] >> s[2] >> s[3];
    for (int i = 1; i <= 3; i++) {
        if (s[i].find("?") != s[i].npos) {
            if (s[i].find("A") == s[i].npos) cout << "A" << endl;
            else if (s[i].find("B") == s[i].npos) cout << "B" << endl;
            else cout << "C" << endl;
        }
    }
    
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
} 