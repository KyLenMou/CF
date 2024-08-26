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
    int n,m;
    cin >> n >> m;
    map<int,int> mp;
    int r = 0;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        set<int> s;
        for (int j = 1; j <= t; j++) {
            int k;
            cin >> k;
            s.insert(k);
        }
        int x1 = -1, x2 = -1;
        for (int j = 0; ; j++) {
            if (!s.count(j)) {
                if (x1 == -1) x1 = j;
                else {
                    x2 = j;
                    break;
                }
            }
        }
        r = max(r,x2);
    }
    cout << min(r+1,m+1) * r + (r + 1 + m) * max(0ll, m - r) / 2 << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}