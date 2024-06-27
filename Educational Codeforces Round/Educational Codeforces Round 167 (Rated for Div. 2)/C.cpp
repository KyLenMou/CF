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
    vector<int> a(n+1), b(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    int aa = 0, bb = 0;
    int c = 0, d = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == b[i]) {
            if (a[i] == -1) d += a[i];
            else c += a[i];
        } else if (a[i] == -1) {
            if (b[i] == 1) bb++;
        } else if (b[i] == -1){
            if (a[i] == 1) aa++;
        } else if (a[i] == 1) {
            aa++;
        } else if (b[i] == 1) {
            bb++;
        }
    }
    d *= -1;
    // cout << aa << ' ' << bb << ' ' << c << ' ' << d << endl;
    if (aa > bb) swap(aa,bb);
    // aa <= bb
    if (bb - aa >= c) {
        aa += c;
        c = 0;
    } else {
        c -= bb - aa;
        aa = bb;
        aa += c / 2;
        bb += (c + 1) / 2;
    }
    if (d <= bb - aa) {
        cout << aa << endl;
    } else {
        d -= bb - aa;
        cout << aa - (d + 1) / 2 << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}