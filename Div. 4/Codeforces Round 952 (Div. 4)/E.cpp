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
#define endl '\n'
#define int long long
using namespace std;

void KyLen() {
    int x,y,z,kk;
    cin >> x >> y >> z >> kk;
    int k = kk;
    int ans = 0;
    for (int i = 1; i <= x; i++) {
        if (k % i != 0) continue;
        k /= i;
        int temp = k;
        for (int j = 1; j <= y; j++) {
            if (k % j != 0 || z < k / j) continue;
            k /= j;
            // i j k
            ans = max(ans, (x - i + 1) * (y - j + 1) * (z - k + 1));
            // cout << i << ' ' << j << ' ' << k << " ans:" << ans << endl;
            k = temp;
        }
        k = kk;
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}