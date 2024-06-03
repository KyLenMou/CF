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
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    if (n == 3) {
        cout << "YES" << endl;
        return;
    }
    vector<int> b(n);
    // n = 5
    // a: x 1 2 3 4 5
    // b: x 1 2 3 4
    for (int i = 2; i <= n; i++) {
        b[i-1] = __gcd(a[i],a[i-1]);
    }
    if (is_sorted(begin(b) + 1, end(b))) {
        cout << "YES" << endl;
        return;
    } else {
        // 删第一个数和最后一个
        if (is_sorted(begin(b) + 2, end(b)) || is_sorted(begin(b) + 1, end(b) - 1)) {
            cout << "YES" << endl;
            return;
        }
        b.push_back(1e9+1);
        vector<int> cc;
        // for (auto i : b) cout << i << ' ';
        // cout << endl;
        for (int i = 2; i < n; i++) {
            if (b[i] < b[i-1]) {
                cc.push_back(i);
            }
        }
        // for (auto i : cc) cout << i << ' ';
        // cout << endl;
        if (cc.size() >= 3) {
            cout << "NO" << endl;
        }
        else {
            auto f = [&] (int idx) {
                vector<int> tb;
                for (int i = 2; i <= n; i++) {
                    if (i != idx) {
                        tb.push_back(__gcd(a[i],a[i-1]));
                    } else {
                        tb.push_back(__gcd(a[i+1],a[i-1]));
                        i++;
                    }
                }
                return is_sorted(begin(tb),end(tb));
            };
            int idx = cc[0];
            if (f(idx-1) || f(idx) || f(idx+1)) cout << "YES" << endl;
            else cout << "NO" << endl; 
        }
        

        // // ====================
        // // 删第二个和倒数第二个
        // if (__gcd(a[1],a[3]) <= b[3] || __gcd(a[n],a[n-2]) >= b[n-3]) {
        //     cout << "YES" << endl;
        //     return;
        // }
        // // 删中间
        // for (int i = 3; i <= n - 2; i++) {
        //     int tg = __gcd(a[i-1],a[i+1]);
        //     if (b[i-2] <= tg && tg <= b[i+1]) {
        //         cout << "YES" << endl;
        //         return;
        //     }
        // }
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
} 