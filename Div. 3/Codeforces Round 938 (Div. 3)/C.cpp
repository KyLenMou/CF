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
    vector<int> a(n+1);
    int num = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        num += a[i];
    }
    if (k >= num) {
        cout << n << endl;
        return;
    }
    int x = (k + 1) / 2, y = k - x;
    int l = 1, r = n;
    for (int l_num = 0;;l++) {
        l_num += a[l];
        if (l_num > x) {
            break;
        }
    }
    for (int r_num = 0;;r--) {
        r_num += a[r];
        if (r_num > y) {
            break;
        }
    }
    cout << n - r + l - 1 << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}