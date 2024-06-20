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
    vector<vector<int>> b(32, vector<int>(n+1));
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        // cout << bitset<4>(a[i]) << endl;
        for (int j = 0; j < 32; j++) {
            b[j][i] = b[j][i-1] + ((a[i] >> j) & 1);
        }
    }
    auto check = [&] (int mid,int l, int k) {
        int num = 0;
        for (int i = 0; i < 32; i++) {
            if (b[i][mid] - b[i][l-1] == mid - l + 1) num |= (1 << i);
        }
        return num >= k;
    };
    int Q;
    cin >> Q;
    while (Q--) {
        int k,l;
        cin >> l >> k;
        if (k > a[l]) {
            cout << -1 << ' ';
            continue;
        }
        int ll = l, rr = n;
        while (ll < rr) {
            int mid = ll + rr + 1 >> 1;
            if (check(mid,l,k)) ll = mid;
            else rr = mid - 1;
        }
        cout << ll << ' ';
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}