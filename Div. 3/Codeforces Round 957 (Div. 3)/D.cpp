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
    int n,m,k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s = "?" + s + "L";
    for (int i = n - 1; i >= 1; i--) {
        if (s[i+1] == 'C' && s[i] == 'W') s[i] = 'C';
    }
    int p = 0;
    int cnt = 0;
    while (p <= n) {
        int flag = 0;
        for (int i = min(n+1,p+m); i >= p+1; i--) {
            if (s[i] == 'L') {
                p = i;
                flag = 1;
                break;
            }
        }
        if (flag) continue;
        flag = 0;
        for (int i = min(n,p+m); i >= p+1; i--) {
            if (s[i] == 'W') {
                p = i;
                flag = 1;
                break;
            }
        }
        while (p <= n && s[p] == 'W') p++,cnt++;
        if (flag == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    if (cnt <= k) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}