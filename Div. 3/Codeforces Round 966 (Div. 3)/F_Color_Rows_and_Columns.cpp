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
    int n,k;
    cin >> n >> k;
    vector<int> a(n+1),b(n+1);
    vector<vector<int>> f(n+1,vector<int>(k+1, 1e9));
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        if (a[i] > b[i]) swap(a[i],b[i]);
    }
    f[0][0] = 0;
    for (int i = 1; i <= n; i++) {
        int x = a[i], y = b[i];
        int xy = x + y;
        int need = 0;
        // 枚举分数
        for (int j = 0, num = x * 2; j <= xy; j++) {
            for (int v = 0; v <= k; v++) {
                if (v + j > k) continue;
                f[i][v+j] = min(f[i][v+j],f[i-1][v]+need);
            }
            if (j < xy) {
                if (x >= y) {
                    x--, need += y;
                } else {
                    y--, need += x;
                }
            }
        }
    }
    if (f[n][k] == 1e9) cout << -1 << endl;
    else cout << f[n][k] << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}