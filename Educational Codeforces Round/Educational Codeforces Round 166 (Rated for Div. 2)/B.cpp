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
    vector<int> a(n+1),b(n+2);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n + 1; i++) {
        cin >> b[i];
    }
    int num = 1;
    for (int i = 1; i <= n; i++) {
        num += abs(a[i] - b[i]);
    }
    int ans = 1e18;
    int x = b[n+1];
    for (int i = 1; i <= n; i++) {
        int t = num;
        if (a[i] > b[i]) {
            if (x >= a[i]) {
                t += 2 * (x - a[i]);
            }
            else if (x <= b[i]) {
                t += (b[i] - x);
            }
        }
        else if (a[i] < b[i]) {
            if (x >= b[i]) {
                t += abs(b[i] - x);
            }
            else if (x <= a[i]) {
                t += 2 * abs(x - a[i]);
            }
        }
        else {
            t += 2 * abs(x - a[i]);
        }
        t = min(t, num + abs(x - a[i]));
        ans = min(ans, t);
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}