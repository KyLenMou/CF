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
    vector<int> a(n+n+10),b(n+n+10);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    int l1 = 1, r1 = n, l2 = 1, r2 = n;
    while (1) {
        if (a[l1] == b[l2] && a[r1] == b[r2] || a[l1] == b[r2] && a[r1] == b[l2]) {
            if (a[l1] == b[l2]) {
                l1++,l2++;
            } 
            else if (a[l1] == b[r2]) {
                l1++,r2--;
            }
            else if (a[r1] == b[l2]) {
                r1--,l2++;
            }
            else if (a[r1] == b[r2]) {
                r1--,r2--;
            }
        }
        else break;
    }
    if (l1 < r1) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}