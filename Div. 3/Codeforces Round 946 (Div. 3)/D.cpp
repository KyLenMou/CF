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

/*
    ↑→↑↓↑→    3 1 0 2                  
    ←←←       0 0 3 0               
    ↑→↓↓←↓    1 3 1 1                  
    ↓↑        1 1 0 0              
    ←→        0 0 1 1              
    ↓↓↑↑      2 2 0 0                
    ←→↓↑      1 1 1 1                
    ↓↓        0 2 0 0              
    →←↑↑      2 0 1 1                
    ←→←→      0 0 2 2               
*/
void KyLen() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> d(4);
    for (auto c : s) {
        if (c == 'N') d[0]++;
        if (c == 'S') d[1]++;
        if (c == 'W') d[2]++;
        if (c == 'E') d[3]++;
    }
    int cnt = 0;
    int num = 0;
    int mx = *max_element(begin(d),end(d));
    for (int i = 0; i < 4; i++) {
        if (d[i] == 0) cnt++;
        num += d[i];
    }
    if (num % 2 == 1) {
        cout << "NO" << endl;
        return;
    }
    if (num <= 2) {
        if (mx == 1) {
            cout << "NO" << endl;
        } else {
            cout << "RH" << endl;
        }
        return;
    }
    s = "?" + s;
    // 偶数，至少四个方向
    if (cnt == 3) {
        for (int i = 1; i <= num / 2; i++) cout << "R";
        for (int i = 1; i <= num / 2; i++) cout << "H";
        cout << endl;
    }
    else {
        auto temp = d;
        for (int i = 0; i < 4; i++) {
            temp[i] %= 2;
        }
        if (temp[0] + temp[1] == 1 || temp[2] + temp[3] == 1) {
            cout << "NO" << endl;
            return;
        }
        vector<char> ans(n+1,'?');
        if (temp[0] == 0) {
            for (int i = 1, j = 1; i <= n; i++) {
                if (s[i] == 'N') {
                    if (j <= d[0] / 2) ans[i] = 'R';
                    else ans[i] = 'H';
                    j++;
                }
            }
            for (int i = 1, j = 1; i <= n; i++) {
                if (s[i] == 'S') {
                    if (j <= d[1] / 2) ans[i] = 'R';
                    else ans[i] = 'H';
                    j++;
                }
            }
        } else {
            for (int i = 1, j = 1; i <= n; i++) {
                if (s[i] == 'N') {
                    if (j <= d[0] / 2 + 1) ans[i] = 'R';
                    else ans[i] = 'H';
                    j++;
                }
            }
            for (int i = 1, j = 1; i <= n; i++) {
                if (s[i] == 'S') {
                    if (j <= d[1] / 2 + 1) ans[i] = 'R';
                    else ans[i] = 'H';
                    j++;
                }
            }
        }
        
        if (temp[2] == 0) {
            for (int i = 1, j = 1; i <= n; i++) {
                if (s[i] == 'W') {
                    if (j <= d[2] / 2) ans[i] = 'H';
                    else ans[i] = 'R';
                    j++;
                }
            }
            for (int i = 1, j = 1; i <= n; i++) {
                if (s[i] == 'E') {
                    if (j <= d[3] / 2) ans[i] = 'H';
                    else ans[i] = 'R';
                    j++;
                }
            }
        } else {
            for (int i = 1, j = 1; i <= n; i++) {
                if (s[i] == 'W') {
                    if (j <= d[2] / 2 + 1) ans[i] = 'H';
                    else ans[i] = 'R';
                    j++;
                }
            }
            for (int i = 1, j = 1; i <= n; i++) {
                if (s[i] == 'E') {
                    if (j <= d[3] / 2 + 1) ans[i] = 'H';
                    else ans[i] = 'R';
                    j++;
                }
            }
        }

        for (int i = 1; i <= n; i++) cout << ans[i];
        cout << endl;
        
    }
    
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}