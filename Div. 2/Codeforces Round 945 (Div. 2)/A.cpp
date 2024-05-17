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
    int a,b,c;
    cin >> a >> b >> c;
    if (a == c) {
        if (a == 0) {
            cout << 0 << endl;
        } else if (a & 1) {
            cout << -1 << endl;
        } else {
            cout << a * 3 / 2 << endl;
        }
        return;
    }
    int ans = -1;
    for (int i = 0; i <= a; i++) {  
        int j = a - i;
        int t1 = min(b - i, c - j);
        int t2 = max(b - i, c - j);
        if ((t2 - t1) % 2 == 1) continue;
        ans = max(ans, i + j + t1);
    }
    cout << ans << endl;

}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}