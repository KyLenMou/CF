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
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x;
    }
    for (int i = 1; i <= n; i++) {
        cin >> a[i].y;
    }
    sort(begin(a)+1,end(a));
    int ans = 0;
    for (int i = 1; i < n; i++) {
        int x1 = a[i].x, x2 = a[i+1].x;
        int y1 = a[i].y, y2 = a[i+1].y;
        if (x1 > m) break;
        if ((m / x1) <= y1) {
            ans = max(ans, (m / x1) * x1);
        } else {
            ans = max(ans, x1 * y1);
        }
        if ((m / x2) <= y2) {
            ans = max(ans, (m / x2) * x2);
        } else {
            ans = max(ans, x2 * y2);
        }
        // ====================
        if (a[i+1].x - a[i].x <= 1) {
            if (x1 * y1 + x2 * y2 <= m) {
                ans = max(ans, x1 * y1 + x2 * y2);
                cout << 1 << endl;
            } else {
                int num = m / x1;
                int mod = m % x1;
                if (num >= y1) {
                    if (mod >= y2) {
                        ans = m;
                        cout << 2 << endl;
                    } else {
                        ans = max(ans, x1 * y1 + (m - (x1 * y1)) / x2 * x2);
                        cout << 3 << endl;
                    }
                } else {
                    ans = max(ans, x1 * num + (m - x1 * num) / x2 * x2);
                    cout << 4 << endl;
                }
                num = m / x2;
                mod = m % x2;
                if (num >= y2) {
                    ans = max(ans, x2 * y2 + (m - x2 * y2) / x1 * x1);
                    cout << 5 << endl;
                } else {
                    ans = max(ans, x2 * num + (m - x2 * num) / x1 * x1);
                    cout << 6 << endl;
                }
                num = m / x1;
                mod = m % x1;
                // cout << num << ' ' << mod << endl;
                if (num - mod <= y1 && mod <= y2) {
                    ans = m;
                cout << 7 << endl;
                }
                // else if (mod > y2 && num <= y1) {
                //     ans = max(ans, num * x1 + )
                // }
            }
        }
        // cout << endl;
        // cout << ans << endl;
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}