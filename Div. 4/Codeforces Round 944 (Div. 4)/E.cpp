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
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> a(k+1),b(k+1);
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= k; i++) {
        cin >> b[i];
    }
    while (q--) {
        int d;
        cin >> d;
        auto idx = lower_bound(begin(a)+1,end(a),d);
        if (*idx == d) {
            cout << b[idx - begin(a)] << ' ';
        } else {
            int last_a = *prev(idx);
            int cur_a = *idx;
            int last_b = b[prev(idx) - begin(a)];   
            int cur_b = b[idx - begin(a)];
            // cout << last_a << " " << cur_a << " " << last_b << " " << cur_b << endl;
            int num = (d - last_a) * (cur_b - last_b) / (cur_a - last_a) + last_b;
            cout << num << ' ';
        }
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}