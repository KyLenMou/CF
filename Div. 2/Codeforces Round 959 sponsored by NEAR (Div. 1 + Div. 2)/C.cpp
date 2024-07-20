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
    vector<int> a(n+1), b(n+1), f(n+3);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i] + b[i-1];
    }
    int ans = 0;
    for (int i = n; i >= 1; i--) {
        int l = i, r = n;
        while (l < r) {
            int mid = l + r + 1 >> 1;
            if (b[mid] - b[i-1] <= k) l = mid;
            else r = mid - 1;
        }
        if (b[l] - b[i-1] <= k) {
            f[i] = l - i + 1 + f[l+2];
        } else {
            f[i] = f[i+1];
        }
    }
    // for (int i = 1; i <= n; i++) {
    //     cout << f[i] << ' ';
    // }
    cout << accumulate(begin(f),end(f),0LL) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
} 