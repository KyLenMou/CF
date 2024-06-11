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

const int mod = 1e9 + 7;
int qmi(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        b >>= 1;
        a = a * a % mod;
    }
    return res % mod;
}
void KyLen() {
    int l,r,k;
    cin >> l >> r >> k;
    if (k >= 10) {
        cout << 0 << endl;
        return;
    }
    auto f = [&](int x) {
        return ((qmi(x,l) % mod) * (qmi(x,r-l) - 1) % mod) % mod;
    };
    if (k == 1) {
        cout << f(10) << endl;
        return;
    }
    if (k == 2) {
        cout << f(5) << endl;
        return;
    }
    if (k == 3) {
        cout << f(4) << endl;
        return;
    }
    if (k == 4) {
        cout << f(3) << endl;
        return;
    }
    cout << f(2) << endl;
    // auto f = [&] (int x) {
    //     int res = 0;
    //     while (x) {
    //         res += x % 10;
    //         x /= 10;
    //     }
    //     return res;
    // };
    // int ans = 0;
    // for (int i = pow(10,l); i < pow(10,r); i++) {
    //     if (f(i*k) == k * f(i)) {
    //         // cout << i << endl;
    //         ans++;
    //     }
    // }
    // cout << "l,r: "<< l << ' ' << r << " ans: " << ans << endl;
    // cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}