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
    string s;
    cin >> s;
    int n = s.size();
    s = "?" + s;
    int q = n;
    while (q >= 1 && s[q] == '1') q--;
    if (q == 0) {
        cout << 0 << endl;
        return;
    }
    int p = 1;
    while (p < q && s[p] == '0') p++;
    if (p >= q) {
        cout << 0 << endl;
        return; 
    }
    int cnt = 0;
    int st = 1;
    int ans = 0;
    while (p <= q) {
        int temp = 0;
        while (p <= q && s[p] == '1') cnt++,p++;
        while (p <= q && s[p] == '0') temp++,p++;
        // cout << cnt << ' ' << temp << endl;
        ans += (cnt + 1) * temp;
    }
    cout << ans << endl;

}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}