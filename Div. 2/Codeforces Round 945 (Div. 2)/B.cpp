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
    for (int i = 1; i <= n; i++) cin >> a[i];
    auto f = [&](int k) {
        vector<int> vis(21);
        for (int i = 1; i <= k; i++) {
            for (int j = 0; j <= 20; j++) {
                vis[j] += (a[i] >> j & 1);
            }
        }
        // cout << "k = " << k << endl;
        // for (int i = 0; i <= 20; i++) {
        //     cout << vis[i] << " ";
        // }
        // cout << endl;
        for (int i = 2; i <= n - k + 1; i++) {
            auto temp = vis;
            int last = i - 1, ne = i + k - 1;
            for (int j = 0; j <= 20; j++) {
                temp[j] -= (a[last] >> j & 1);
                temp[j] += (a[ne] >> j & 1);
            }
            // for (int j = 0; j <= 20; j++) {
            //     cout << temp[j] << " ";
            // }
            // cout << endl;
            for (int j = 0; j <= 20; j++) {
                if (temp[j] > 0 && vis[j] == 0 || temp[j] == 0 && vis[j] > 0) return false;
            }
            vis = temp;
        }
        return true;
    };
    // f(1);
    int l = 1, r = n;
    // cout << l << ' ' << r << endl;
    while (l < r) {
        int mid = l + r >> 1;
        // cout << "mid = " << mid << endl;
        if (f(mid)) r = mid;
        else l = mid + 1;
        // cout << l << ' ' << r << endl;
    }
    cout << l << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}