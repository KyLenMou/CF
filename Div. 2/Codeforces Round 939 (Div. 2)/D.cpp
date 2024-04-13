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
    vector<vector<int>> a;
    vector<int> b(n+1);
    vector<int> qwq;
    a.push_back(qwq);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        if (b[i] >= 5) {
            ans += b[i];
            a.push_back(qwq);
        }
        else {
            a.back().push_back(i);
        }
    }
    vector<pair<int,int>> op;
    // cout << a.size() << " " << ans << endl;
    // 对每块区域进行操作
    for (auto g : a) {
        if (g.empty()) continue; 
        int sz = g.size();
        ans += (sz * (sz/2+1));
        // 全变成0
        for (auto i : g) {
            if (b[i] != 0) {
                op.push_back({i,i});
            }
        }
        if (sz <= 1) {
            op.push_back({g[0],g[0]});
        }
        else if (sz <= 3) {
            op.push_back({g[0],g[0]});
            op.push_back({g[0],g[sz-1]});
        }
        else if (sz <= 5) {
            op.push_back({g[0],g[0]});
            op.push_back({g[0],g[1]});
            op.push_back({g[2],g[2]});
            op.push_back({g[0],g[sz-1]});
        }
        else if (sz <= 9) {
            op.push_back({g[0],g[0]});
            op.push_back({g[0],g[1]});
            op.push_back({g[2],g[2]});
            op.push_back({g[1],g[3]});
            op.push_back({g[4],g[4]});
            op.push_back({g[0],g[sz-1]});
        }
        else {
            op.push_back({g[3],g[3]});
            op.push_back({g[3],g[4]});
            op.push_back({g[2],g[2]});
            op.push_back({g[1],g[3]});
            op.push_back({g[5],g[5]});
            op.push_back({g[3],g[6]});
            op.push_back({g[7],g[7]});
            op.push_back({g[7],g[8]});
            op.push_back({g[0],g[0]});
            op.push_back({g[0],g[sz-1]});
        }
    }
    cout << ans << " " << op.size() << endl;
    for (auto i : op) {
        cout << i.x << " " << i.y << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    KyLen();
    return 0;
}