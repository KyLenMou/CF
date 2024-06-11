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
    int n,m;
    cin >> n >> m;
    vector<string> g(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> g[i];
        g[i] = '?' + g[i];
    }
    vector<vector<int>> cnt(n+1,vector<int>(m+1)), vis(n+1,vector<int>(m+1));
    int dx[] = {0,0,1,-1}, dy[] = {1,-1,0,0};
    int cur = 1;
    function<void(int,int)> dfs = [&] (int x, int y) {
        vis[x][y] = 1;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx < 1 || nx > n || ny < 1 || ny > m || g[nx][ny] == '.' || vis[nx][ny] == 1) continue;
            cur++;
            if (!vis[nx][ny]) dfs(nx,ny);
        }
        cnt[x][y] = cur;
    };
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (g[i][j] == '.' || vis[i][j] == 1) continue;
            cur = 1;
            dfs(i,j);
        }
    }
    // 输出cnt
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << cnt[i][j] << ' ';
        }
        cout << endl;
    }
    int ans = 0;
    // 遍历每行
    for (int i = 1; i <= n; i++) {
        int num = 0;
        // 遍历上下两行
        for (int j = 1; j <= m; j++) {
            if (cnt[i][j] == 0) {
                num++;
                if (i > 1) num += cnt[i-1][j];
                if (i < n) num += cnt[i+1][j];
            } else {
                num += cnt[i][j];
            }
        }
        ans = max(ans,num);
    }
    // 遍历每列
    for (int j = 1; j <= m; j++) {
        int num = 0;
        for (int i = 1; i <= n; i++) {
            if (cnt[i][j] == 0) {
                num++;
                if (j > 1) num += cnt[i][j-1];
                if (j < m) num += cnt[i][j+1];
            } else {
                num += cnt[i][j];
            }
        }
        ans = max(ans,num);
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}