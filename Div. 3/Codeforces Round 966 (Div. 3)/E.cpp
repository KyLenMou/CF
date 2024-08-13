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
    int n,m,k;
    cin >> n >> m >> k;
    int w;
    cin >> w;
    vector<int> b(w);
    for (int i = 0; i < w; i++) cin >> b[i];
    vector<vector<int>> a(n+2,vector<int>(m+2));
    for (int i = k; i <= n; i++) {
        for (int j = k; j <= m; j++) {
            a[i+1][j+1]++;
            a[i+1][j-k+1]--;
            a[i-k+1][j+1]--;
            a[i-k+1][j-k+1]++;
        }
    }
    vector<int> c;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
            c.push_back(a[i][j]);
            // cout << a[i][j] << ' ';
        }
        // cout << endl;
    }
    sort(begin(c),end(c));
    reverse(begin(c),end(c));
    sort(begin(b),end(b));
    reverse(begin(b),end(b));
    int ans = 0;
    for (int i = 0; i < w; i++) {
        ans += b[i] * c[i];
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}