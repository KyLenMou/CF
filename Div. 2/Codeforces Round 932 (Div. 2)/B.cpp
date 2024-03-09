/* \/\ \         /\ \                       
\ \ \/'/'  __  __\ \ \         __    ___    
 \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\  
  \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \ 
   \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\
    \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/
               /\___/                       
       ___ ___ \/__/                                       
     /' __` __`\                                         
     /\ \/\ \/\ \    ___   __  __                                 
     \ \ \ \ \ \ \  / __`\/\ \/\ \                                 
      \ \ \ \ \ \ \/\ \L\ \ \ \_\ \                                 
       \ \ \ \ \ \ \ \____/\ \____/                                 
        \/_/\/_/\/_/\/___/  \/__*/                                 
#include<bits/stdc++.h>
#define RainRingBell int32_t main()
#define KyLen ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define Kshqsz int T;cin >> T;while(T--) solve()
#define Kitto return 0
#define x first
#define y second
#define endl '\n'
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    map<int,int> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    if (m[0] == 0) {
        cout << "2\n1 1\n2 " << n << endl;
        return;
    }
    if (m[0] == 1) {
        cout << -1 << endl;
        return;
    }
    int mex = 1;
    for (int i = 1; i <= n; i++) {
        if (m[i] == 0) break;
        mex++;
    }
    vector<pair<int,int>> ans;
    set<int> s;
    for (int i = 1, last = 1; i <= n; i++) {
        if (a[i] < mex) s.insert(a[i]);
        if (s.size() == mex) {
            ans.push_back({last,i});
            last = i + 1;
            s.clear();
        }
    }
    if (ans.size() < 2) {
        cout << -1 << endl;
    } else {
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
            if (i == ans.size() - 1) cout << ans[i].x << ' ' << n << endl;
            else cout << ans[i].x << ' ' << ans[i].y << endl; 
        }
    }
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}