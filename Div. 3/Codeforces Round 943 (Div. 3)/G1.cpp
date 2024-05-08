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

vector<int> Z(string s) {
    int n = s.size() - 1;
    vector<int> z(n + 1);
    z[1] = n;
    for (int i = 2, l, r = 0; i <= n; i++) {
        if (i <= r) z[i] = min(z[i-l+1], r-i+1);
        while (s[z[i]+1] == s[i + z[i]]) z[i]++;
        if (i + z[i] - 1 > r) {
            l = i, r = i + z[i] - 1;
        }
    }
    return z;
}

void KyLen() {
    int n,l1,l2;
    cin >> n >> l1 >> l2;
    string s;
    cin >> s;
    s = "?" + s;
    auto z = Z(s);
    auto check = [&](int k) {
        string pre = s.substr(1, k);
        int cnt = 1;
        for (int i = k + 1; i <= n - k + 1; i++) {
            if (z[i] >= k) {
                cnt++;
                i += k - 1;
            }
            // 使用find
            // if (s.find(pre, i) == i) {
            //     cnt++;
            //     i += k - 1;
            // }
            // if (s.substr(i, k) == pre) {
            //     cnt++;
            //     i += k - 1;
            // }
        }
        if (cnt >= l1) {
            return 1;
        }
        return 0;
    };
    int l = 0, r = n / l1;
    while (l < r) {
        int mid = (l + r + 1) >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    cout << l << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}