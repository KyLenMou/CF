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
    string s;
    cin >> s;
    s = "?" + s;
    if (k == n / 2) {
        set<char> st;
        for (int i = 1; i <= n; i++) {
            st.insert(s[i]);
        }
        if (st.size() == 1) {
            cout << -1 << endl;
            return;
        }
    }
    auto f = [&] (string str) {
        for (int i = 1; i <= n; i++) {
            int cnt = 0;
            int cur = i;
            while (cur <= n && str[cur] == str[i]) {
                cur++;
                cnt++;
            }
            if (cnt != k) return false;
            i = cur - 1;
        }
        return true;
    };
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        int cur = i;
        while (cur <= n && s[cur] == s[i]) {
            cur++;
            cnt++;
        }
        if (cnt == k) {
            i = cur - 1;
            continue;
        }
        if (cnt > k) {
            string tt = s.substr(1,cur-k-1);
            // cout << tt << endl;
            // 翻转tt
            reverse(tt.begin(),tt.end());
            string temp = "?" + s.substr(cur-k) + tt;
            // cout << temp << endl;
            if (f(temp)) {
                cout << cur - k - 1 << endl;
                return;
            } else {
                cout << -1 << endl;
                return;
            }
        } else {
            string tt = s.substr(1,cur-1);
            // 翻转tt
            reverse(tt.begin(),tt.end());
            string temp = "?" + s.substr(cur) + tt;
            // cout << temp << endl;
            if (f(temp)) {
                cout << cur - 1 << endl;
                return;
            } else {
                cout << -1 << endl;
                return;
            }
        }
        i = cur - 1;
    }
    cout << n << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}