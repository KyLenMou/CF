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
    int maxa = 0, mina = 1e9;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        maxa = max(maxa, a[i]);
        mina = min(mina, a[i]);
    }
    if (maxa == mina) {
        cout << 0 << endl;
        return;
    }
    int flag1 = 1, flag2 = 1;
    int idx1 = 0, idx2 = 0;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            if (a[1] == mina && a[n] == maxa) {
                flag1 = 0;
                idx1 = 1;
                break;
            }
        }
        else if (a[i] == mina && a[i-1] == maxa) {
            flag1 = 0;
            idx1 = i;
            break;
        }
    }
    for (int i = n; i >= 1; i--) {
        if (i == n) {
            if (a[1] == maxa && a[n] == mina) {
                flag2 = 0;
                idx2 = n;
                break;
            }
        }
        else if (a[i] == mina && a[i+1] == maxa) {
            flag2 = 0;
            idx2 = i;
            break;
        }
    }
    if (flag1 == 0) {
        int t = n;
        int idx = idx1;
        int last = a[idx];
        while (--t) {
            idx++;
            if (idx > n) idx = 1;
            if (a[idx] < last) {
                flag1 = 1;
                break;
            }
            last = a[idx];
        }
    }
    if (flag2 == 0) {
        int t = n;
        int idx = idx2;
        int last = a[idx];
        while (--t) {
            idx--;
            if (idx < 1) idx = n;
            if (a[idx] < last) {
                flag2 = 1;
                break;
            }
            last = a[idx];
        }
    }
    // cout << flag1 << ' ' << idx1 << ' ' << flag2 << ' ' << idx2 << endl;
    if (flag1 && flag2) {
        cout << -1 << endl;
        return;
    }
    int ans = 1e9;
    if (flag1 == 0) {
        if (idx1 == 1) {
            cout << 0 << endl;
            return;
        }
        ans = min(n - idx1 + 1, 2 + idx1 - 1);
    }
    if (flag2 == 0) {
        if (idx2 == n) {
            cout << 1 << endl;
            return;
        }
        ans = min({1 + n - idx2, 1 + idx2, ans});
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}