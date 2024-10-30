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
    int n,m,q;
    cin >> n >> m >> q;
    vector<int> a(m+2);
    a[0] = 0;
    a[m+1] = n+1;
    for (int i = 1; i <= m; i++) {
        cin >> a[i];
    }
    sort(begin(a),end(a));
    map<int,int> mp;
    for (int i = 1; i <= m + 1; i++) {
        if (i == 1) {
            mp[a[i]] = a[i] - 1;
        } else if (i == m + 1) {
            mp[a[i]] = n - a[i-1];
        } else {
            mp[a[i]] = (a[i] - a[i-1]) / 2;
        }
        
    }
    while (q--) {
        int x;
        cin >> x;
        auto it = *mp.upper_bound(x);
        cout << it.y << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}