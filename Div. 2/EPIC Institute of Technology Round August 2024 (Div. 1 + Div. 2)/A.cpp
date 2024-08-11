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
    int n,m,k;
    cin >> n >> m >> k;
    // if (k >= max(n,m)) {
    //     cout << n * m << endl;
    //     return;
    // }
    // int a = max(0LL, n - k), b = max(0LL, m - k);
    // cout << a * b + (n - 2 * a) * b + (m - 2 * b) * a + (n - 2 * a) * (m - 2 * b) << endl;
    // int a = max(0LL, (n - k)), b = max(0LL, (m - k));
    cout << (n - k) * (m - k) + (n - 2 * (n - k)) * (m - k) + (m - 2 * (m - k)) * (n - k) + (n - 2 * (n - k)) * (m - 2 * (m - k)) << endl;
    // cout << a << ' ' << b << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}