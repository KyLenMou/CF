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
    vector<int> a(n+1);
    int lc = 1;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (lc <= 1e9) lc = lcm(lc, a[i]);
    }
    sort(begin(a)+1,end(a));
    if (lc != a.back()) {
        cout << n << endl;
        return;
    }
    int ans = 0;
    auto f = [&] (int c) {
        if (find(begin(a)+1,end(a),c) != a.end()) return;
        // cout << c << endl;
        int cnt = 0;
        int lm = 1;
        for (int i = 1; i <= n; i++) {
            if (c % a[i] == 0) {
                cnt++;
                lm = lcm(lm, a[i]);
            }
        }
        if (lm == c) ans = max(ans, cnt);
    };
    for (int i = 1; i * i <= lc; i++) {
        if (lc % i == 0) {
            // cout << i << ' ' << lc / i << endl;
            f(i);
            f(lc / i);
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
} 