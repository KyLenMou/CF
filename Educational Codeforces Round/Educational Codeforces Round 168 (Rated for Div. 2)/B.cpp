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
    vector<string> a(3);
    cin >> a[1] >> a[2];
    a[1] = '?' + a[1];
    a[2] = '?' + a[2];
    int ans = 0;
    for (int i = 3; i <= n; i++) {
        if (a[1][i] == 'x' && a[1][i-2] == 'x' && a[1][i-1] == '.' && a[2][i] == '.' && a[2][i-1] == '.' && a[2][i-2] == '.') {
            ans++;
        }
        if (a[1][i] == '.' && a[1][i-2] == '.' && a[1][i-1] == '.' && a[2][i] == 'x' && a[2][i-1] == '.' && a[2][i-2] == 'x') {
            ans++;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}