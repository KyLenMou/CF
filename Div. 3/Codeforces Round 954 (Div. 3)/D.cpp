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
    string s;
    cin >> s;
    if (n == 2) {
        cout << stoi(s) << endl;
        return;
    }
    if (n > 3) {
        int flag = 1;
        for (auto c : s) {
            if (c != '1') flag = 0;
        }
        if (flag) {
            cout << "11" << endl;
            return;
        }
        if (s.find('0') != s.npos) {
            cout << 0 << endl;
        } else {
            s = '?' + s;
            int ans = 1e18;
            for (int i = 2; i <= n; i++) {
                int num = stoi(s.substr(i - 1, 2));
                for (int j = 1; j <= n; j++) {
                    if (j == i - 1 || j == i || s[j] == '1') continue;
                    num += s[j] - '0';
                }
                ans = min(ans,num);
            }
            cout << ans << endl;
        }
        return;
    }
    if (s[0] == '0' || s[2] == '0') {
        cout << "0" << endl;
    } else {
        int a1 = stoi(s.substr(0,2)), a2 = stoi(s.substr(1,2));
        int b1 = s[2] - '0', b2 = s[0] - '0';
        int ans = min({a1*b1,a1+b1,a2*b2,a2+b2});
        // cout << a1 << ' ' << b1 << ' ' << a2 << ' ' << b2 << endl;
        cout << ans << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}