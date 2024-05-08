// /* \/\ \         /\ \                        
// \ \ \/'/'  __  __\ \ \         __    ___     
//  \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\   
//   \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \  
//    \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\ 
//     \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/ 
//                /\___/                        
//        ___ ___ \/__/      qq: 2729269812     
//      /' __` __`\       email: kkkylen@qq.com 
//      /\ \/\ \/\ \    ___   __  __            
//      \ \ \ \ \ \ \  / __`\/\ \/\ \           
//       \ \ \ \ \ \ \/\ \L\ \ \ \_\ \          
//        \ \ \ \ \ \ \ \____/\ \____/          
//         \/_/\/_/\/_/\/___/  \/__*/           
// #include<bits/stdc++.h>
// #define x first
// #define y second
// #define endl '\n'
// #define int long long
// using namespace std;

// void KyLen() {
//     int n,k,pa,pb;
//     cin >> n >> k >> pa >> pb;
//     vector<int> a(n+1),b(n+1);
//     for (int i = 1; i <= n; i++) cin >> a[i];
//     for (int i = 1; i <= n; i++) cin >> b[i];
//     int t = k;
//     int p = pa;
//     int pre = b[p];
//     int numa = t * b[p];
//     p = a[p];
//     t--;
//     while (p != pa && t > 0) {
//         numa = max(numa,t * b[p] + pre);
//         t--;
//         pre += b[p];
//         p = a[p];
//     }
//     t = k;
//     p = pb;
//     pre = b[p];
//     int numb = t * b[p];
//     p = a[p];
//     t--;
//     while (p != pb && t > 0) {
//         numb = max(numb,t * b[p] + pre);
//         t--;
//         pre += b[p];
//         p = a[p];
//     }
//     // cout << numa << ' ' << numb << endl;
//     if (numa > numb) cout << "Bodya" << endl;
//     else if (numa < numb) cout << "Sasha" << endl;
//     else cout << "Draw" << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
    int n, k, pb, ps;
    cin >> n >> k >> pb >> ps;

    vector<int> p(n), a(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--;
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    pb--, ps--;

    int max_e = ranges::max(a);
    i64 mx = 0;
    function<void(int,i64, int)> dfs = [&](int x, i64 sum, int turn) {
        if (turn == k || a[x] == max_e || p[x] == x) {
            mx = max(mx, sum + 1LL * (k - turn) * a[x]);
            return;
        }
        i64 now = sum + a[x];
        dfs(x, now, turn + 1);
        dfs(p[x], now, turn + 1);
    };

    i64 mx1 = 0;
    dfs(pb, 0, 0);
    mx1 = mx;
    mx = 0;
    dfs(ps, 0, 0);
    if (mx1 == mx) {
        cout << "Draw\n";
    } else if (mx1 > mx) {
        cout << "Bodya\n";
    } else {
        cout << "Sasha\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    return 0;
}
