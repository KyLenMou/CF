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
    int flag1 = 0, flag2 = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s.insert(a[i]);
        if (a[i] & 1) flag1 = 1;
        else flag2 = 1;
    }
    if (s.size() == 1) {
        cout << n << endl;
        for (int i = 1; i <= n; i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
        return;
    }
    if (flag1 && flag2) {
        cout << -1 << endl;
        return;
    }
    vector<int> ans(41);
    for (int T = 1; T <= 40; T++) {
        int mina = *min_element(begin(a)+1, end(a));
        int maxa = *max_element(begin(a)+1, end(a));
        int num = abs(maxa + mina) / 2;
        if (maxa == mina) {
            num = maxa;
        }
        ans[T] = num;
        for (int i = 1; i <= n; i++) {
            a[i] = abs(a[i] - num);
            // cout << a[i] << ' ';
        }
        // cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        if (a[i]) {
            cout << -1 << endl;
            return;
        }
    }
    cout << 40 << endl;
    for (int i = 1; i <= 40; i++) {
        cout << ans[i] << ' ';
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}