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
#define int long long
using namespace std;

void KyLen() {
    int n,k;
    cin >> n >> k;
    auto ask = [&] (int l, int x) {
        cout << "? " << l << " " << x << endl;
        int t;
        cin >> t;
        return t;
    };
    // 先问出mx
    int mx;
    for (int i = 1; i <= n; i++) {
        int t = ask(1, i * n);
        if (t == n) {
            mx = i;
            break;
        }
    }
    // 枚举m，只有n/k个可能
    int ans = -1;
    for (int i = 1; i <= n / k; i++) {
        int m = mx * i; 
        int cnt = 0, last = 1;
        while (cnt < k && last <= n) {
            int t = ask(last, m);
            if (t == n + 1) {
                break;
            }
            cnt++;
            last = t + 1;
        }
        if (cnt == k && last == n + 1) {
            ans = max(ans, m);
        }
    }
    cout << "! " << ans << endl;
    cin >> n;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}