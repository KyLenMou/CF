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

// 第i个， 以第j个字符开头， 以第k个字符结尾
int dp[1010][5][6];

void KyLen() {
    int n,m;
    cin >> n >> m;
    /**
     * narek
     */
    vector<string> a(n+1);
    string tar = "narek";
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] = "?" + a[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 5; j++) {
            int cur = j;
            for (int k = 1; k <= n; k++) {
                if (a[i][k] == tar[cur]) {
                    cur++;
                    if (cur >= 5) {
                        dp[i][j][5]++;
                        cur %= 5;
                    }
                }
            }
            for (int k = 0; k < 5; k++) {
                dp[i][j][k] = dp[i][j][5];
            }
        }


        for (int j = 1; j <= i; j++) {
            for (int k = 0; k < 5; k++) {
                
            }
        }
    }

}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}