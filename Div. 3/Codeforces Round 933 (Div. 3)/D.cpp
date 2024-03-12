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
    int n,m,x;
    cin >> n >> m >> x;
    vector<pair<int,char>> a(m+1);
    for (int i = 1; i <= m; i++) {
        cin >> a[i].x >> a[i].y;
    }
    vector<vector<int>> vis(n+1,vector<int>(m+1,0));
    set<int> ans;
    function<void(int,int)> dfs = [&](int cur, int index) {
        if (index == m + 1) ans.insert(cur);
        if (vis[cur][index] || index > m + 1) return;
        // cout << cur << ' ' << index << endl;
        if (index > 1) vis[cur][index] = true;
        if (a[index].y == '?') {
            int t1 = cur + a[index].x;
            int t2 = cur - a[index].x;
            dfs((t1 == n || t1 == 0) ? n : (t1 + n) % n, index+1);
            dfs((t2 == n || t2 == 0) ? n : (t2 + n) % n, index+1);
        } 
        else if (a[index].y == '1') {
            int t = cur - a[index].x;
            dfs((t == n || t == 0) ? n : (t + n) % n, index+1);
        }
        else {
            int t = cur + a[index].x;
            dfs((t == n || t == 0) ? n : (t + n) % n, index+1);
        }
    };
    dfs(x,1);
    cout << ans.size() << endl;
    for (auto i : ans) cout << i << ' ';
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}   