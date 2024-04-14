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
    if (n == 1) {
        cout << "1 1\n1 1 1" << endl;
        return;
    }
    if (n == 2) {
        cout << "7 3\n1 1 1 2\n1 2 1 2\n2 1 1 2" << endl;
        return;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += (1 + 2 * (i - 1)) * i;
    }
    cout << ans << " " << n * 2 << endl;
    for (int i = 1; i <= 2 * n; i++) {
        cout << ((i & 1) ? 1 : 2) << " " << (n - (i + 1) / 2 + 1) << " ";
        for (int j = 1; j <= n; j++) cout << j << " ";
        cout << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}