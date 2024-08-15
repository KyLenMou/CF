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
    int ans = 0;
    int flag = 0;
    int flag1 = 0;
    int flag2 = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            if (!flag1) ans++;
            else ans += 2;
            flag1 ^= 1;
        }
        else if (a == 2) {
            if (!flag2) ans++;
            else ans += 2;
            flag2 ^= 1;
        }
        else {
            if (!flag) ans++;
            else ans += 2;
            flag ^= 1;
        }
    }
    if (ans & 1) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}