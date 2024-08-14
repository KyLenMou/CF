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

int f[200000+10], inf[200000+10];
int mod = 1e9 + 7;
int qmi(int a, int k, int p) {
    int res = 1;
    while (k) {
        if (k & 1) res = res * a % p;
        a = a * a % p;
        k >>= 1;
    }
    return res;
}
int C(int a, int b) {
    if (b > a) return 0LL;
    return f[a] * inf[b] % mod * inf[a-b] % mod;
}
void KyLen() {
    int n,k;
    cin >> n >> k;
    int ones = 0;
    int zeros = 0;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        if (t) ones++;
        else zeros++;
    }
    int ans = 0;
    for (int i = k / 2 + 1; i <= min(ones,k); i++) {
        ans = (ans + C(ones,i) * C(zeros,k-i) % mod) % mod;
    }
    cout << ans << endl;
}

int32_t main() {
    f[0] = inf[0] = 1;
    for (int i = 1; i < 200010; i++) {
        f[i] = f[i-1] * i % mod;
        inf[i] = inf[i-1] * qmi(i, mod-2, mod) % mod;
    } 
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}