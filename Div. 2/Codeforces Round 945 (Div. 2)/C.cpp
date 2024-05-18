/* \/\ \         /\ \                        
\ \ \/'/'  __  __\ \ \         __    ___     
 \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
  \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
   \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
    \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
               /\___/                        
       ___ ___ \/__/      qq: 2729269812     
     /' __` __`\       email: kkkylen@qq.com 
     /\ \/\ \/\ \    ___   __  __            
     \ \ \ \ \ \ \  / __`\/\ \/\ \           
      \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
       \ \ \ \ \ \ \ \____/\ \____/          
        \/_/\/_/\/_/\/___/  \/__*/           
#include<bits/stdc++.h>
#define x first
#define y second
#define endl '\n'
#define int long long
using namespace std;

void KyLen() {
    int n;
    cin >> n;
    vector<int> a(n+1), ans(n+1,-1);
    vector<pair<int,int>> b;
    int t = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 1) t = i & 1;
    }
    vector<int> vis(n+1);
    for (int i = 1 + t; i <= n; i += 2) {
        ans[i] = n + 2 - a[i];
        vis[ans[i]] = 1;
        b.push_back({a[i + (t ? -1 : 1)], i + (t ? -1 : 1)});
    }
    vector<int> s;
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            s.push_back(i);
        }
    }
    // for (auto x : s) cout << x << ' ';
    // cout << endl;
    // for (auto [x,y] : b) cout << x << ' ' << y << endl;
    sort(begin(s),end(s),greater<>());
    sort(begin(b),end(b));
    for (int i = 0; i < s.size(); i++) {
        ans[b[i].y] = s[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << ' ';
    }   cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
} 