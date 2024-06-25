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
    int x,y,k;
    cin >> x >> y >> k;
    if (y == 2) {
        x++,k--;
        while (x % 2 == 0) x /= 2;
        while (x != 1) {
            if (k == 0) {
                cout << x << endl;
                return;
            }
            x++,k--;
            while (x % 2 == 0) x /= 2;
        }
        cout << 1 << endl;
        return;
    }
    function<void()> f = [&] () {
        if (k > 0) x++,k--;
        while (x && x % y == 0) x /= y;
        if ((x % y) + k < y) {
            cout << x + k << endl;
        } else if ((x % y) + k == y) {
            x += k;
            while (x && x % y == 0) x /= y;
            cout << x << endl;
        } else {
            // cout << k << ' ' << x << ' ' << x % 3 << endl;
            k -= (x + y - 1) / y * y - x;
            x = (x + y - 1) / y;
            // cout << k << ' ' << x << ' ' << x % 3 << endl;
            f();
            // cout << x << endl;
            // k -= (x + y - 1) / y * y - x;
            // cout << k << endl;
            // x = (x + y - 1) / y;
            // while (x != 0 && x % y == 0) x /= y;
            // cout << x << endl;
            // if (x + k < y) {
            //     cout << x + k << endl;
            // } else if (x + k == y) {
            //     cout << 1 << endl;
            // } else {
            //     k -= y - x;
            //     x = 1;
            //     if (y - 1 == 1) cout << 1 << endl;
            //     else cout << k % (y - 1) << endl;
            // }
        }
    };
    f();
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}