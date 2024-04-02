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
    vector<string> a(1);
    string s;
    while (cin >> s) {
        a.push_back(s);
    }
    int n = a.size() - 1;
    vector<vector<int>> g(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j - 1] == '1') {
                g[i][j] = 1;
            }
            g[i][j] += g[i][j - 1] + g[i - 1][j] - g[i - 1][j - 1];
        }
    }
    int res = 0;
    for (int i = 1; i <= n - 3; i++) {
        for (int j = 1; j <= n - 3; j++) {
            res = max(res, g[i + 3][j + 3] - g[i-1][j + 3] - g[i + 3][j-1] + g[i-1][j-1]);
        }
    }
    cout << res << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    KyLen();
    return 0;
}