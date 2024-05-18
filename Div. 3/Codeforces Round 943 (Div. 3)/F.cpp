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
    int n,Q;
    cin >> n >> Q;
    vector<int> a(n+2),s(n+2);
    map<int,vector<int>> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i-1] ^ a[i];
        m[s[i]].push_back(i);
    }
    while (Q--) {
        int l,r;
        cin >> l >> r;
        int cur = s[r] ^ s[l-1];
        if (cur == 0) {
            cout << "YES" << endl;
            continue;
        }
        /**
         * --x-- --3-- --3-- --3--
         *      ^     ^     ^     ^
         *     l-1    r    l-1    r
        */
        auto &v1 = m[s[r]], &v2 = m[s[l-1]];
        auto x = lower_bound(v1.begin(),v1.end(),l);
        auto y = lower_bound(v2.begin(),v2.end(),r);    
        if (x != v1.end() && y != v2.begin() && *x < *prev(y)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}