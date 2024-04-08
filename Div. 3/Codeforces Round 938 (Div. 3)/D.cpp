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
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n+1),b(m+1);
    map<int,int> m1,m2;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) {
        int bb;
        cin >> bb;
        m1[bb]++;
    };
    int num = 0, ans = 0;
    for (int i = 1; i <= m; i++) {
        m2[a[i]]++;
        if (m1[a[i]] && m1[a[i]] >= m2[a[i]]) num++;
    };
    ans += num >= k;
    // cout << 1 << ' ' << num << endl;
    // for (auto x : m2) cout << x.x << ' ' << x.y << endl;
    // cout << endl;
    for (int i = 2; i <= n - m + 1; i++) {
        m2[a[i-1]]--;
        if (m1[a[i-1]] && m1[a[i-1]] > m2[a[i-1]]) num--;
        m2[a[i+m-1]]++;
        if (m1[a[i+m-1]] && m1[a[i+m-1]] >= m2[a[i+m-1]]) num++;
        // cout << i << ' ' << num << endl;
        // for (auto x : m2) cout << x.x << ' ' << x.y << endl;
        // cout << endl;
        ans += num >= k;
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}