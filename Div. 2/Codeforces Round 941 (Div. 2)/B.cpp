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
        g[i] = "?" + g[i];
    }
    if (n == 1 && m == 1) {
        cout << "YES" << endl;
        return;
    }
    if (n == 1) {
        if (g[1][1] == g[1][m]) {
            cout << "YES" << endl;
            return;
        } else {
            cout << "NO" << endl;
            return;
        }
    }
    if (m == 1) {
        if (g[1][1] == g[n][1]) {
            cout << "YES" << endl;
            return;
        } else {
            cout << "NO" << endl;
            return;
        }
    }
    if (g[1][1] == g[n][m]) {
        cout << "YES" << endl;
        return; 
    }
    // 左上角
    int flag1 = 0, flag2 = 0;
    for (int i = 1; i <= m; i++) if (g[n][i] == g[1][1]) flag1 = 1;
    for (int i = 1; i <= n; i++) if (g[i][m] == g[1][1]) flag2 = 1;
    if (flag1 && flag2) {
        cout << "YES" << endl;
        return;
    }
    // 右上角
    flag1 = 0, flag2 = 0;
    for (int i = 1; i <= m; i++) if (g[n][i] == g[1][m]) flag1 = 1;
    for (int i = 1; i <= n; i++) if (g[i][1] == g[1][m]) flag2 = 1;
    if (flag1 && flag2) {
        cout << "YES" << endl;
        return;
    }
    // 左下角
    flag1 = 0, flag2 = 0;
    for (int i = 1; i <= m; i++) if (g[1][i] == g[n][1]) flag1 = 1;
    for (int i = 1; i <= n; i++) if (g[i][m] == g[n][1]) flag2 = 1;
    if (flag1 && flag2) {
        cout << "YES" << endl;
        return;
    }
    // 右下角
    flag1 = 0, flag2 = 0;
    for (int i = 1; i <= m; i++) if (g[1][i] == g[n][m]) flag1 = 1;
    for (int i = 1; i <= n; i++) if (g[i][1] == g[n][m]) flag2 = 1;
    if (flag1 && flag2) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
} 