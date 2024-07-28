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
using namespace std;

void KyLen() {
    int n;
    cin >> n;
    vector<int> b(n+10), a(n+10);
    for (int i = 1; i < n; i++) {
        cin >> b[i];
    }
    a[1] = b[1];
    if (n == 2) {
        cout << b[1] << ' ' << b[1] << endl;
        return;
    }
    a[n] = b[n-1];
    a[2] = b[1] | b[2];
    for (int i = 3; i <= n; i++) {
        int t = 0;
        int x = b[i-1], y = a[i-1];
        // cout << x << ' ' << y << endl;
        if (x == 0) {
            a[i] = ((1 << (30)) - 1) ^ y;
            continue;
        }
        int flag = 0;
        for (int j = 29; j >= 0; j--) {
            int f1 = (x & (1 << j));
            int f2 = (y & (1 << j));
            if (f1) flag = 1;
            if (flag == 0) {
                t += (1 << j);
                continue;
            }
            if (f1 && f2) {
                t += (1 << j);
            } else if (f1) {
                cout << -1 << endl;
                return;
            } else if (f2) {

            } else {
                t += (1 << j);
            }
        }
        a[i] = t;
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}