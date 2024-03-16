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
    vector<string> g(3);
    vector<vector<bool>> st(3,vector<bool>(n+1));
    cin >> g[1];
    cin >> g[2]; 
    g[1] = '?' + g[1];
    g[2] = '?' + g[2];
    int dx[] = {1,-1,0,0}, dy[] = {0,0,1,-1};
    queue<pair<int,int>> q;
    q.push({1,2});
    q.push({2,1});
    st[1][2] = st[2][1] = true;
    while (q.size()) {
        auto [x,y] = q.front();
        // cout << x << ' ' << y << endl;
        q.pop();
        // 先按箭头移动
        if (g[x][y] == '>') y++;
        else y--;
        if (st[x][y] || y < 1 || y > n) continue;
        if (x == 2 && y == n) {
            cout << "YES" << endl;
            return;
        }
        // 上下左右
        for (int i = 0; i < 4; i++) {
            int tx = x + dx[i], ty = y + dy[i];
            if (tx < 1 || tx > 2 || ty < 1 || ty > n || st[tx][ty]) continue;
            st[tx][ty] = true;
            q.push({tx,ty});
        }
    }
    cout << "NO" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}