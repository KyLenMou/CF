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
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> a(n+1);
    int cnt_k = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x >> a[i].y;
        if (a[i].x > a[i].y) swap(a[i].x, a[i].y);
        cnt_k += a[i].x + a[i].y;
    }
    sort(begin(a)+1,end(a),[&](pair<int,int> a,pair<int,int> b) {
        if (a.x == 1) return a.x < b.x;
        if (a.x == 2) return a.x < b.x;
        if (a.x == 3) return a.x < b.x;
        if (a.x + a.y == b.x + b.y) {
            if (a.x == b.x) return a.y < b.y;
            return a.x < b.x;
        }
        return a.x + a.y < b.x + b.y;
    });
    if (cnt_k < k) {
        cout << "-1" << endl;
        return;
    }
    int num = 0;
    int idx = -1;
    for (int i = 1; i <= n; i++) {
        num += a[i].x + a[i].y;
        if (num >= k) {
            idx = i;
            break;
        }
    }
    int ans = 0;
    num = 0;
    for (int i = 1; i < idx; i++) {
        ans += a[i].x * a[i].y;
        num += a[i].x + a[i].y;
    }
    k -= num;
    // cout << "k:" << k << endl;
    // cout << ans << endl;
    // for (auto [x,y] : a) {
    //     cout << x << ' ' << y << endl;
    // }
    int x = a[idx].x, y = a[idx].y;
    if (x > y) swap(x,y);
    if (k >= y - x) {
        ans += (y - x) * x;
        if (k == x + y) k--;
        k -= (y - x);
        for (int i = 1; i <= k; i++) {
            ans += (x * 2 - i + 1) / 2;
        }
    } else {
        ans += k * x; 
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}