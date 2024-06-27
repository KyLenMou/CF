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
    string a,b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    a = "?" + a, b = "?" + b;
    int ans = 0;
    for (int i = 1; i <= m; i++) {
        int j = i;
        int k = 1;
        int cnt = 0;
        while (k <= n) {
            while (j <= m && k <= n && b[j] == a[k]) {
                // cout << j << ' ' << k << " : ";
                j++,k++,cnt++;
            }
            k++;
            // cout << endl;
        }
        ans = max(ans, cnt);
    }
    cout << n + m - ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}