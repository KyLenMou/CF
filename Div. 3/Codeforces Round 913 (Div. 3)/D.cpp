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
    vector<pair<int,int>> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x >> a[i].y;
    }
    auto f = [&](int k) {
        int l = 0, r = 0;
        for (int i = 1; i <= n; i++) {
            int lmin = l - k, rmax = r + k;
            int L = a[i].x, R = a[i].y;
            if (L > rmax || R < lmin) return 0;
            l = max(lmin,L);
            r = min(rmax,R);
        }
        return 1;
    };
    int l = 0, r = 1e9;  
    while (l < r) {
        int mid = l + r >> 1;
        if (f(mid)) r = mid;
        else l = mid + 1;
    }
    cout << l << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}