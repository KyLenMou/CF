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
//     int n,m;
//     cin >> n >> m;
//     if (n < m || (n - m) % 2 == 1) cout << "NO" << endl;
//     else cout << "YES" << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     int T; cin >> T; while(T--) KyLen();
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stoi
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n>> m;

        if (m >= n && (m - n) % 2 == 0){
            cout << "Yes\n";
        } else{
            cout<<"No\n";
        }
    }

    return 0;
}