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
    int n,d,k;
    cin >> n >> d >> k;
    vector<int> a(n+2);
    for (int i = 1; i <= k; i++) {
        int l,r;
        cin >> l >> r;
        a[l]++,a[r+1]--;
    }
    for (int i = 1; i <= n; i++) {
        a[i] += a[i-1];
    }
    int ans1 = 1, cnt1 = 0;
    int ans2 = 1, cnt2 = 1e9;
    for (int i = 1; i <= n - d + 1; i++) {
        int t = 0;
        for (int j = i; j <= i + d - 1; j++) {
            t = max(t,a[j]);
        }
        if (cnt1 < t) {
            cnt1 = t;
            ans1 = i;
        }
        if (cnt2 > t) {
            cnt2 = t;
            ans2 = i;
        }
    }
    cout << ans1 << ' ' << ans2 << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}