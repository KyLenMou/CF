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
    vector<int> a(n+1), s(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(begin(a)+1, end(a));
    for (int i = 1; i <= n; i++) {
        s[i] = s[i-1] + a[i];
    }
    int l = 1, r = 1;
    int ans = 0;
    while (r <= n) {
        if (a[r] - a[l] <= 1) {
            int num = s[r] - s[l-1];
            if (num <= k) {
                ans = max(ans, num);
            } else {
                while (l < r) {
                    num = s[r] - s[l-1];
                    if (num > k) l++;
                    else break;
                }
                num = s[r] - s[l-1];
                if (num <= k) {
                    ans = max(ans, num);
                }
            }
            r++;
        } else {
            while (l < r) {
                if (a[r] - a[l] <= 1) break;
                l++;
            }
            int num = s[r] - s[l-1];
            if (num <= k) {
                ans = max(ans, num);
            }
            if (a[r] <= k) {
                ans = max(a[r],ans);
            }
            r++;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}