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
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int mina = *min_element(a.begin()+1, a.end());
    int maxa = *max_element(a.begin()+1, a.end());
    int l = mina, r = maxa;
    while (l < r) {
        int mid = (l+r+1)/2;
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] < mid) {
                cnt += mid-a[i];
            }
        }
        if (cnt <= k) l = mid;
        else r = mid-1;
    }
    int num = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] < l) {
            num += l-a[i];
        }
    }
    int cur = l;
    int ans = cur * n - n + 1;
    k -= num;
    // cout << cur << ' ' << k << ' ' << ans << endl;
    if (cur >= maxa) {
        ans = (cur + k / n) * n - n + 1 + k % n;
        cout << ans << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] > cur) {
            ans++;
        } else {
            if (k > 0) {
                k--;
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}