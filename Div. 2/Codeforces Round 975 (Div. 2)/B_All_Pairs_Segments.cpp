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
    int n,q;
    cin >> n >> q;
    map<int,int> m;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        m[a] += (n - i);
        if (i > 1) m[a] += (2 - i);
    }
    int last = m.begin() -> y;
    int sb = 0;
    for (auto [x,y] : m) {
        if (sb) {
            m[x] += last;
            last = m[x];
        } else sb++;
    }
    map<int,int> ans;
    int last_x = m.begin() -> x;
    int last_y = m.begin() -> y;
    ans[last_y]++;
    int idx = 1;
    int t1 = 0;
    int flag = 1;
    for (auto [x,y] : m) {
        // cout << x << ' ' << y << endl;
        if (idx > 1) {
            ans[y]++;
            if (idx <= (n + 1) / 2) {
                // cout << last_y - t1 << endl;
                ans[last_y - t1] += x - last_x - 1;
                t1++;
            } else {
                if (n & 1 && flag) {
                    t1--;
                    flag = 0;
                }
                // cout << y - t1 << endl;
                ans[y - t1] += x - last_x - 1;
                t1--;
            }
            // if (n & 1) {
            //     if (idx <= n / 2 + 1) {
            //         // cout << y - (temp2 - temp) - 1 << endl;
            //         // cout << x - last_x - 1 << endl;
            //         ans[y - (temp2 - temp)] += x - last_x - 1;
            //         temp++;
            //     } else {
            //         // cout << last_y - (temp2 - temp1) - 1 << endl;
            //         // cout << x - last_x - 1 << endl;
            //         ans[last_y - (temp2 - temp1)] += x - last_x - 1;
            //         temp1--;
            //     }
            // } else {
            //     if (idx <= n / 2 + 1) {
            //         // cout << y - (n-2)/2-abs(idx-1-n/2) << endl;
            //         ans[y - (n-2)/2-abs(idx-1-n/2)] += x - last_x - 1;
            //     } else {
            //         // cout << last_y - (n-2)/2-abs(idx-1-n/2) << endl;
            //         ans[last_y - (n-2)/2-abs(idx-1-n/2)] += x - last_x - 1;
            //     }
            // }
            // ans[(n-2)/2-abs(idx-1-n/2)] += x - last_x - 1;
        }
        last_x = x;
        last_y = y;
        idx++;
    }
    // cout << "====================" << endl;
    // for (int i = 1; i <= 15; i++) {
    //     cout << ans[i] << endl;
    // }
    while (q--) {
        int k;
        cin >> k;
        cout << ans[k] << ' ';
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}