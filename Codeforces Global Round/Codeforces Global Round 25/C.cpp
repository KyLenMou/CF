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
    int t = k;
    vector<pair<int,int>> a(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i].x;
        a[i].y = i;
    }
    sort(a.begin()+1,a.end(),[&](pair<int,int> x,pair<int,int> y) {
        if (x.x == y.x) return x.y < y.y;
        return x.x < y.x;
    });
    vector<int> b(n+2);
    int d = (k + m - 1) / m;
    for (int i = 1; i <= d; i++) {
        int j = a[i].y;
        if (i < d) {
            b[j+1] += m;
        } else {
            b[j+1] += t;
        }
        t -= m;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        b[i] += b[i-1];
        cout << b[i] << ' ';
    }
    t = k;
    for (int i = 1; i <= d; i++) {
        int j = a[i].y;
        if (i < d) {
            ans += m * (a[i].x + b[j]);
        } else {
            ans += t * (a[i].x + b[j]);
        }
        t -= m;
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}