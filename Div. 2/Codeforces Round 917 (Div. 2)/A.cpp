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
    vector<int> a(n+1);
    int flag = 0, cnt = 0; 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 0) flag = 1;
        cnt += (a[i] < 0);
    }
    if (flag || cnt & 1) {
        cout << 0 << endl;
    } else {
        cout << "1\n1 0" << endl;
    }
     
    
}

int32_t main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}