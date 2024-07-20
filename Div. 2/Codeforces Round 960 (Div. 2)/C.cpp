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
    vector<int> a(n+1), b(n+3), vis(n+1);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ans += a[i];
    }
    map<int,int> m;
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        m[a[i]]++;
        if (m[a[i]] >= 2) {
            if (a[i] > mx) {
                mx = a[i];
            }
        }
        b[i] = mx;
    }
    for (int i = 2; i <= n; i++) {
        if (b[i-1] != b[i] && b[i] != b[i+1]) {
            ans += b[i];
            b[i] = b[i-1];
            vis[i] = 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        // cout << b[i] << ' ';
        if (vis[i]) {
            ans += b[i] * (n - i);
        } else {
            ans += b[i] * (n - i + 1);
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}