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
#define int int64_t
using namespace std;

void KyLen() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "1\n1\n";
        return;
    }
    vector<int> ans;
    ans.push_back(n);
    int last = n;
    int last_idx = -1;
    for (int i = 0; i <= 60; i++) {
        if ((n >> i) & 1) {
            if (last_idx == -1) {
                ans.push_back(last - (1LL << i));
                last = last - (1 << i);
                last_idx = i;
            } else {
                ans.push_back(last - (1LL << i) + (1LL << last_idx));
                last = last - (1LL << i) + (1LL << last_idx);
                last_idx = i;
            }
        } else {
            continue;
        }
    }
    sort(begin(ans),end(ans));
    cout << ans.size() - (ans[0] == 0) << endl;
    for (auto i : ans) {
        if (i) cout << i << ' ';
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}