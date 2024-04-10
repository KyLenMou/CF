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
    string t;
    cin >> n >> t;
    t = '?' + t;
    for (int k = n; k > 0; k--) {
        vector<int> c(n+2);
        int flag = 1;
        // c[i]为1表示t[i]需要翻转
        for (int i = 1; i <= n; i++) {
            c[i] ^= c[i-1];
            // 1. c[i]为0，t[i]为'0' 结果为'0' 需要翻转
            // 2. c[i]为1，t[i]为'1' 结果为'0'(acsll码上的异或，很巧，为'0') 需要翻转
            // 3. c[i]为0，t[i]为'1' 结果为'1' 不需要翻转
            // 4. c[i]为1，t[i]为'0' 结果为'1'('0'的ascll码最低位为0，异或1后总值+1) 不需要翻转
            // 如果操作后t[i]不为'1'
            if ((c[i] ^ t[i]) != '1') {
                if (i + k - 1 > n) {
                    flag = 0;
                    break;
                }
                c[i] ^= 1;
                c[i+k] ^= 1;
            }
        }
        if (flag) {
            cout << k << endl;
            return;
        }
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
//     string s;
//     cin >> n >> s;
//     s = '?' + s;
//     for (int k = n; k > 0; k--) {
//         string t = s;
//         vector<int> c(n+1);
//         if (t[1] == '0') {
//             c[1]++;
//             c[k+1]--;
//         }
//         for (int i = 2; i <= n - k + 1; i++) {
//             c[i] += c[i-1];
//             c[i] %= 2;
//             if (c[i]) {
//                 if (t[i] == '1') t[i] = '0';
//                 else t[i] = '1';
//             }
//             if (t[i] == '0') {
//                 c[i]++;
//                 c[i+k]--;
//             }
//         }
//         int flag = 1;
//         for (int i = n - k + 2; i <= n; i++) {
//             c[i] += c[i-1];
//             c[i] %= 2;
//             if (c[i]) {
//                 if (t[i] == '1') t[i] = '0';
//                 else t[i] = '1';
//             }
//             if (t[i] != '1') {
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag) {
//             cout << k << endl;
//             return;
//         }
//     }
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// } 



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
//     string ss;
//     cin >> n >> ss;
//     ss = '?' + ss;
//     for (int k = n; k > 0; k--) {
//         string s = ss;
//         for (int i = 1; i <= n - k + 1; i++) {
//             if (s[i] == '0') {
//                 for (int j = i; j <= i + k - 1; j++) {
//                     if (s[j] == '1') s[j] = '0';
//                     else s[j] = '1';
//                 }
//             }
//         }
//         int flag = 1;
//         for (int i = n - k + 2; i <= n; i++) {
//             if (s[i] == '0') {
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag) {
//             cout << k << endl;
//             return;
//         }
//     }
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// } 