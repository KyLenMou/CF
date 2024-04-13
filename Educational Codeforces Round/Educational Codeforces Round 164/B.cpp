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
    vector<int> a(n+1);
    set<int> s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s.insert(a[i]); 
    }
    if (s.size() == 1) {
        cout << -1 << endl;
        return;
    }
    if (a[1] != a[n]) {
        cout << 0 << endl;
        return;
    }
    int last = 0;
    int ans = n;
    for (int i = 1; i <= n; i++) {
        if (a[i] != a[i-1] && a[i] != a[1] && a[i-1] != a[1]) {
            cout << 0 << endl;
            return;
        }
        if (a[i] != a[1]) {
            ans = min(ans, i-last-1);
            last = i;
        }
    }
    ans = min(ans, n-last);
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}