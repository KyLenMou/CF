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

// int b[] = {0, 1,2,1,2,3, 1,2,3,2,1, 2,2,2,3,1, 2,3,2,3,2, 2,3,3,3,2, 3,3,3,4,2};
// 1 3 6 10 15
void KyLen() {
    int n;
    cin >> n;
    int ans = 1e9;
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 1; j++) {
            for (int k = 0; k <= 4; k++) {
                for (int l = 0; l <= 2; l++) {
                    int num = n - i - j * 3 - k * 6 - l * 10;
                    if (num < 0 || num % 15 != 0) continue;
                    ans = min(i + j + k + l + num / 15, ans);
                }
            }
        }
    }
    cout << ans << endl;
    // int ans = 1e9;
    // if (n >= 15) {
    //     ans = 1 + (n - 15) / 30 * 2 + b[(n - 15) % 30];
    // }
    // cout << min(n / 30 * 2 + b[n % 30], ans) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}