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
    vector<int> a(n+1), s(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int l,u;
        cin >> l >> u;
        int L = l, R = n;
        while (L < R) {
            // 找到s[mid] - s[l-1] <= u
            int mid = (L + R + 1) / 2;
            if (s[mid] - s[l-1] <= u) L = mid;
            else R = mid - 1;
        }
        int t = u - (s[L] - s[l-1]);
        if (abs(t - a[L+1]) > t) cout << L << ' ';
        else cout << min(L+1,n) << ' ';
    } 
    cout << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
} 