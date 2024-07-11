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
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    int p = 1;
    set<int> s1,s2;
    int ans = 0;
    while (p <= n) {
        int flag = 0;
        for (auto x : s2) {
            if (x == a[p]) {
                s1.clear();
                s2.clear();
                ans++;
                s2.insert(k / a[p]);
                flag = 1;
                break;
            }
            else if (x % a[p] == 0 && x != 1 && a[p] != 1) {
                s2.insert(a[p]);
                flag = 1;
                break;
            }
        }
        if (flag) {
            p++;
            continue;
        }
        if (k % a[p] == 0) {
            s2.insert(k / a[p]);
        }
        p++;
    }
    cout << ans + 1 << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}