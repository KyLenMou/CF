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
    string s;
    cin >> s;
    s = "?" + s;
    vector<int> L(k+1), R(k+1), c(n+2);
    for (int i = 1; i <= k; i++) cin >> L[i];
    for (int i = 1; i <= k; i++) cin >> R[i];
    int Q;
    cin >> Q;
    while (Q--) {
        int x;
        cin >> x;
        auto cur = lower_bound(begin(R)+1,end(R),x) - begin(R);
        int l = min(x, L[cur] + R[cur] - x), r = max(x, L[cur] + R[cur] - x);
        c[l]++, c[r+1]--;
    }
    for (int i = 1; i <= n; i++) c[i] += c[i-1];
    for (int i = 1; i <= k; i++) {
        int l = L[i], r = R[i];
        for (int j = l; j <= r; j++) {
            if (c[j] & 1) {
                cout << s[l+r-j];
            } else {
                cout << s[j];
            }
        }
    }
    cout << endl;
}   

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}