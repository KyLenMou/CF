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
    vector<int> a(n+1), p(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        p[i] = i;
    }
    function<int(int)> find = [&] (int x) {
        return p[x] == x ? x : p[x] = find(p[x]);
    };
    auto merge = [&] (int a, int b) {
        p[find(a)] = find(b);
    };
    vector<pair<int,int>> ans;
    for (int mod = n - 1; mod >= 1; mod--) {
        map<int,int> m;
        for (int i = 1; i <= n; i++) {
            int cur = m[a[i] % mod];
            if (cur == 0) {
                m[a[i] % mod] = i;
            } else if (find(cur) != find(i)) {
                merge(cur,i);
                ans.push_back({cur,i});
                break;
            }
        }
    }
    cout << "YES" << endl;
    for (auto it = ans.rbegin(); it != ans.rend(); it++) {
        cout << it -> x << ' ' << it -> y << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}