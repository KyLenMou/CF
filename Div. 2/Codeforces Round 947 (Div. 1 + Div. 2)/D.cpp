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
    int red,blue;
    cin >> red >> blue;
    vector<int> g[n+1], last(n+1), dist(n+1);
    for (int i = 1; i < n; i++) {
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    queue<int> q;
    q.push(red);
    // 找blue的路径
    while (q.size()) {
        int t = q.front();
        q.pop();
        for (auto ne : g[t]) {
            if (last[ne]) continue;
            q.push(ne);
            last[ne] = t;
        }
    }
    // 找相遇点
    int cnt = 0;
    for (int i = blue; i != red; i = last[i]) {
        cnt++;
    }
    // cout << cnt << endl;
    // cout << (cnt + 1) / 2 << endl;
    int start = blue;
    for (int i = 1; i <= (cnt + 1) / 2; i++) {
        start = last[start];
    }
    // cout << start << endl;
    // 找离相遇点最远的点
    queue<int> qq;
    qq.push(start);
    dist[start] = 1;
    while (qq.size()) {
        int t = qq.front();
        qq.pop();
        for (auto ne : g[t]) {
            if (dist[ne]) continue;
            dist[ne] = dist[t] + 1;
            qq.push(ne);
        }
    }
    int ans = (n - 1) * 2 + (cnt + 1) / 2;
    int max_dist = 0;
    for (int i = 1; i <= n; i++) {
        // cout << i << ':' << dist[i] << endl;
        max_dist = max(max_dist, dist[i]);
    }
    // cout << max_dist << endl;
    cout << ans - max_dist + 1 << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}