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
    map<string, vector<int>> m;
    vector<string> a(n+1);
    for (int i = 1; i <= n; i++) {
        string st1;
        cin >> st1;
        sort(begin(st1),end(st1));
        m[st1].push_back(i);
        a[i] = st1;
        // int a,b;
        // if (st[0] == 'B') a = 1;
        // if (st[0] == 'R') a = 2;
        // if (st[0] == 'G') a = 3;
        // if (st[0] == 'Y') a = 4;
        // if (st[1] == 'B') b = 1;
        // if (st[1] == 'R') b = 2;
        // if (st[1] == 'G') b = 3;
        // if (st[1] == 'Y') b = 4;
        // if (a > b) swap(a,b);
    }
    auto f = [&] (string st, string ed) {
        return st[0] == ed[0] || st[0] == ed[1] || st[1] == ed[0] || st[1] == ed[1];
    };
    while (Q--) {
        int x,y;
        cin >> x >> y;
        string st = a[x];
        string ed = a[y];
        sort(begin(st),end(st));
        sort(begin(ed),end(ed));
        if (f(st,ed)) {
            cout << abs(x - y) << endl;
            continue;
        }
        // B G R Y
        vector<string> str = {"??","BG","BR","BY","GR","GY","RY"};
        int ans = 1e9;
        for (int i = 1; i <= 6; i++) {
            if (!(st != str[i] && f(st,str[i]))) continue;
            vector<int>& g = m[str[i]];
            if (x < y) {
                auto it = upper_bound(begin(g), end(g), x);
                if (it != end(g)) {
                    auto t1 = *it;
                    ans = min(ans, abs(x - t1) + abs(y - t1));
                }
                if (g.size()) {
                    if (g[0] < x) {
                        it = prev(upper_bound(begin(g), end(g), x));
                        auto t1 = *it;
                        ans = min(ans, abs(x - t1) + abs(y - t1));
                    }
                }
            } else {
                auto it = upper_bound(begin(g), end(g), x);
                if (it != end(g)) {
                    auto t1 = *it;
                    ans = min(ans, abs(x - t1) + abs(y - t1));
                }
                if (g.size()) {
                    if (g[0] < x) {
                        it = prev(upper_bound(begin(g), end(g), x));
                        auto t1 = *it;
                        ans = min(ans, abs(x - t1) + abs(y - t1));
                    }
                }
            }
        }
        if (ans == 1e9) cout << -1 << endl;
        else cout << ans << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}