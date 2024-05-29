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
    char tr;
    cin >> tr;
    map<char,vector<int>> m;
    for (int i = 1; i <= n * 2; i++) {
        string s;
        cin >> s;
        m[s[1]].push_back(s[0]-'0');
    }
    int tr_num = 0, ot_num = 0;
    for (auto [x,y] : m) {
        sort(begin(y),end(y));
        if (x == tr) tr_num += y.size();
        else ot_num += y.size();
    }
    if (tr_num >= ot_num) {
    }

}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}
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
//     int n;
//     cin >> n;
//     char tr;
//     cin >> tr;
//     vector<string> a(40);
//     for (int i = 1; i <= n * 2; i++) {
//         cin >> a[i];
//     }
//     set<pair<string,string>> arr,ans;
//     vector<int> vis(40);
//     auto f = [&] () {
//         for (int i = 1; i <= n * 2; i++) {
//             if (!vis[i]) return 0;
//         }
//         return 1;
//     };
//     int flag = 0;
//     map<set<pair<string,string>>,int> m;
//     function<void()> dfs = [&] () {
//         // for (auto [x,y] : arr) {
//         //     cout << x << ' ' << y << endl;
//         // }
//         // cout << "--------------" << endl;
//         if (flag) return;
//         if (f()) {
//             flag = 1;
//             ans = arr;
//             return;
//         }
//         for (int i = 1; i <= n * 2; i++) {
//             if (flag) break;
//             if (vis[i]) continue;
//             for (int j = 1; j <= n * 2; j++) {
//                 if (flag) break;
//                 if (vis[j] || i == j || m[arr]) continue;
//                 if (a[i][1] != tr) {
//                     if (a[j][1] == tr || a[j][1] == a[i][1] && a[j][0] > a[i][0]) {
//                         arr.insert({a[i],a[j]});
//                         vis[i] = 1;
//                         vis[j] = 1;
//                         dfs();
//                         m[arr]++;
//                         arr.erase({a[i],a[j]});
//                         vis[i] = 0;
//                         vis[j] = 0;
//                     }
//                 } else {
//                     if (a[j][1] == tr && a[j][0] > a[i][0]) {
//                         arr.insert({a[i],a[j]});
//                         vis[i] = 1;
//                         vis[j] = 1;
//                         dfs();
//                         m[arr]++;
//                         arr.erase({a[i],a[j]});
//                         vis[i] = 0;
//                         vis[j] = 0;
//                     }
//                 }
//             }
//         }
//     };
//     dfs();
//     if (!flag) {
//         cout << "IMPOSSIBLE" << endl;
//     } else {
//         for (auto [x,y] : ans) {
//             cout << x << ' ' << y << endl;
//         }
//     }
//     // cout << "====================" << endl; 
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// }