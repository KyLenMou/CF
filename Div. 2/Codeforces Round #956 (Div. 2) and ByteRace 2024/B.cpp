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
    vector<string> a(n+1),b(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] = "?" + a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        b[i] = "?" + b[i];
    }
    vector<vector<int>> c(n+1,vector<int>(m+1,0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            c[i][j] = (b[i][j] - a[i][j] + 3) % 3;
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            // if (c[i][j] == 1) {
                
            // }
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
} 