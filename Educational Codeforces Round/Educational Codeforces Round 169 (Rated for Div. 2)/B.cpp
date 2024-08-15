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
    vector<pair<int,int>> a(2);
    cin >> a[0].x >> a[0].y >> a[1].x >> a[1].y;
    int l1 = a[1].x, r1 = a[1].y, l2 = a[0].x, r2 = a[0].y;
    if (r2 < l1) {
        cout << 1 << endl;
    }
    else if (r2 == l1) {
        cout << 2 << endl;
    }
    else if (r2 > l1 && r2 < r1 && l2 < l1) {
        cout << r2 - l1 + 2 << endl;
    }
    else if (l2 < l1 && r2 == r1) {
        cout << r1 - l1 + 1 << endl;
    }
    else if (l2 < l1 && r2 > r1) {
        cout << r1 - l1 + 2 << endl;
    }
    else if (l2 == l1 && r2 < r1) {
        cout << r2 - l2 + 1 << endl;
    }
    else if (l2 == l1 && r2 == r1) {
        cout << r2 - l1 << endl;
    }
    else if (l2 == l1 && r2 > r1) {
        cout << r1 - l1 + 1 << endl;
    }
    else if (l2 > l1 && r2 < r1) {
        cout << r2 - l2 + 2 << endl;
    }
    else if (l2 > l1 && r2 == r1) {
        cout << r2 - l2 + 1 << endl;
    }
    else if (l2 > l1 && l2 < r1 && r2 > r1) {
        cout << r1 - l2 + 2 << endl;
    }
    else if (l2 == r1 && r2 > r1) {
        cout << 2 << endl;
    }
    else cout << 1 << endl;
    // if (l2 > r1) {
    //     cout << 1 << endl;
    // }
    // else if (l1 < l2 && r1 > r2) {
    //     cout << min(r1,r2) - max(l1,l2) + 2 << endl;
    // } 
    // else if (l1 == l2 && r2 > r1) {
    //     cout << min(r1-l1,r2-l2) + 1 << endl;
    // }
    // else if (r1 == r2 && l1 < l2) {
    //     cout << min(r1-l1,r2-l2) + 1 << endl;
    // }
    // else if (r1 == r2 && l1 == l2) {
    //     cout << r1 - l1 << endl;
    // }
    // else {
    //     cout << min(r1,r2) - min(l1,l2) + 1 << endl;
    // }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}