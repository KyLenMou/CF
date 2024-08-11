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
    int n,q;
    cin >> n >> q;
    vector<int> a(n+1);
    for (int i = 1; i < n; i++) {
        int bed;
        cin >> bed;
    }
    auto lowbit = [&] (int x) -> int {
        return x & -x;
    };
    auto add = [&] (int x, int y) {
        while (x <= n) {
            a[x] += y;
            x += lowbit(x);
        }
    };
    function<int(int)> query = [&] (int x) {
        if (x <= 0) return 0ll;
        else return query(x - lowbit(x)) + a[x];
    };
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        add(i,t);
    }
    while (q--) {
        int x,y;
        cin >> x >> y;
        int t1 = query(x) - query(x-1), t2 = query(y) - query(y-1);
        cout << t1 << ' ' << t2 << endl;
        add(x,t2-t1);
        add(y,t1-t2);
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}