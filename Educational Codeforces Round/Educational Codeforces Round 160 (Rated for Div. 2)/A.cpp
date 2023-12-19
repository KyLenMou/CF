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
    // for (int i = 1; i <= n / 2 - (n % 2 == 0); i++) {
    //     if (s[i] != '0') {
    //         cout << s.substr(0,i) << ' ' << s.substr(i) << endl;
    //         return;
    //     }
    // }
    // if (n % 2 == 0 && s[n/2] != '0') {
    //     int a = stoi(s.substr(0,n/2));
    //     int b = stoi(s.substr(n/2));
    //     if (a < b) {
    //         cout << a << ' ' << b << endl;
    //         return;
    //     }
    // }
    // cout << -1 << endl;
    
    for (int i = 1; i < n; i++) {
        string a = s.substr(0,i);
        string b = s.substr(i);
        if (b[0] == '0') continue;
        if (stoi(a) < stoi(b)) {
            cout << a << ' ' << b << endl;
            return;
        }
    }
    cout << -1 << endl;
    
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
} 