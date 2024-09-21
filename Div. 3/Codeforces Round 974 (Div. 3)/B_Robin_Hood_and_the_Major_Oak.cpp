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
    int n,k;
    cin >> n >> k;
    if (n & 1) {
        if (k & 1) {
            // 1 2 3 4 5
            k = (k + 1) / 2;
            if (k & 1) cout << "NO" << endl;
            else cout << "YES" << endl;
        } else {
            k /= 2;
            if (k & 1) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    } else {
        if (k & 1) {
            // 1 2 3 4 5
            k = (k + 1) / 2;
            if (k & 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        } else {
            k /= 2;
            if (k & 1) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}