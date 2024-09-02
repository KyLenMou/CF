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
    s = "?" + s;

    if (sqrtl(n) - (int) sqrtl(n)) {
        cout << "NO" << endl;
        return;
    }
    int m = sqrtl(n);
    for (int i = 1; i <= m; i++) {
        if (s[i] == '0') {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = n-m+1; i <= n; i++) {
        if (s[i] == '0') {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 2; i < m; i++) {
        if (s[(i-1)*m+1] == '0' || s[(i-1)*m+m] == '0') {
            cout << "NO" << endl;
            return;
        }
        for (int j = (i-1)*m+2; j < (i-1)*m+m; j++) {
            if (s[j] == '1') {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}