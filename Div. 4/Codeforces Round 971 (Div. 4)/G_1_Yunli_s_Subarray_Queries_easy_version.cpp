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
    int n,k,Q;
    cin >> n >> k >> Q;
    vector<int> a(n+1), ans(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] -= i;
    }
    map<int,int> m1;
    map<int,set<int>> m2;
    for (int i = 1; i <= k; i++) {
        m1[a[i]]++;
    }
    for (auto [x,y] : m1) {
        m2[y].insert(x);
    }
    ans[1] = k - (m2.rbegin() -> first);
    for (int i = k + 1; i <= n; i++) {
        m2[m1[a[i-k]]].erase(a[i-k]);
        if (m2[m1[a[i-k]]].empty()) m2.erase(m1[a[i-k]]);
        m1[a[i-k]]--;
        m2[m1[a[i-k]]].insert(a[i-k]);

        m2[m1[a[i]]].erase(a[i]);
        if (m2[m1[a[i]]].empty()) m2.erase(m1[a[i]]);
        m1[a[i]]++;
        m2[m1[a[i]]].insert(a[i]);

        ans[i - k + 1] = k - (m2.rbegin() -> first);
    }
    while (Q--) {
        int x,y;
        cin >> x >> y;
        cout << ans[x] << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}