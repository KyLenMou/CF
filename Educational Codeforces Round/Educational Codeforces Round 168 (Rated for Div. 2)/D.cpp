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
#define int int64_t
using namespace std;

void KyLen() {
    int n;
    cin >> n;
    vector<int> a(n+1), g[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 2; i <= n; i++) {
        int t;
        cin >> t;
        g[t].push_back(i);
    }

    function<bool(int,int)> dfs = [&](int u, int div) {
        if (g[u].size() == 0) {
            return a[u] >= div;
        }
        for (auto ne : g[u]) {
            if (!dfs(ne, div + max(0LL, div - a[u]))) {
                return false;
            }
        }
        if (div > 2e10) return false;
        return true;
    };
    auto check = [&](int mid) {
        for (auto ne : g[1]) {
            if (!dfs(ne, mid)) return false;
        }
        return true;
    };
    int l = 0, r = 2e10;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    cout << l + a[1] << endl;

}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}