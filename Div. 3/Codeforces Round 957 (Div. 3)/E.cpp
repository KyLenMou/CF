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
    int len = to_string(n).size();
    string temp = to_string(n);
    while (temp.size() < 7) temp += temp;
    vector<pair<int,int>> ans;
    for (int i = 1; i <= 1e4; i++) {
        int num = len * i;
        for (int j = max(1LL, num - 7); j <= num; j++) {
            int tar_len = len * i - j;
            if (tar_len != 0) {
                string tar_str = temp.substr(0, tar_len);
                int tar = stoi(tar_str);
                if (n * i - j == tar) {
                    ans.push_back({i, j});
                }
            } else {
            }
        }
    }
    cout << ans.size() << endl;
    for (auto [i, j] : ans) {
        cout << i << ' ' << j << endl;
    }
}
void KyLen1(int n) {
    int len = to_string(n).size();
    string temp = to_string(n);
    while (temp.size() < 7) temp += temp;
    vector<pair<int,int>> ans;
    for (int i = 1; i <= 1e4; i++) {
        int num = len * i;
        for (int j = max(1LL, num - 7); j <= num; j++) {
            int tar_len = len * i - j;
            if (tar_len != 0) {
                string tar_str = temp.substr(0, tar_len);
                int tar = stoi(tar_str);
                if (n * i - j == tar) {
                    ans.push_back({i, j});
                }
            } else {
            }
        }
    }
    cout << ans.size() << endl;
    // for (auto [i, j] : ans) {
    //     cout << i << ' ' << j << endl;
    // }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    for (int i = 1; i <= 100; i++) {
        // cout << "=========="<<i<<"==========" << endl;
        KyLen1(99);
    }
    // int T; cin >> T; while(T--) KyLen();
    return 0;
}