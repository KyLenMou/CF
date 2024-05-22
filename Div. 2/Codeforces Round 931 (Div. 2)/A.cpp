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
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(begin(a)+1,end(a));
    // for (int i = 1; i <= n; i++) {
    //     cout << a[i] << ' ';
    // } cout << endl;
    int ans = -1;
    for (int i = 2; i <= n - 2; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            ans = max(abs(a[n] - a[j]) + abs(a[j] - a[i]) + abs(a[i] - a[1]) + abs(a[n] - a[1]), ans);
        }
    }
    for (int j = 2; j <= n - 2; j++) {
        for (int i = j + 1; i <= n - 1; i++) {
            ans = max(abs(a[n] - a[j]) + abs(a[j] - a[i]) + abs(a[i] - a[1]) + abs(a[n] - a[1]), ans);
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}