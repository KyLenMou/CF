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
    string s;
    cin >> s;
    s = "?" + s;
    s[1] = '(';
    int num = 0;
    if (s[2] == '(') num = 2;
    for (int i = 4; i <= n; i+=2) {
        if (s[i] == '(') {
            if (num > 0) {
                s[i-1] = ')';
            } else {
                s[i-1] = '(';
                num += 2;
            }
        } else {
            if (num > 0) {
                s[i-1] = ')';
                num -= 2;
            } else {
                s[i-1] = '(';
            }
        }
    }
    vector<int> p;
    p.push_back(1);
    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if (s[i] == '(') {
            p.push_back(i);
        } else {
            ans += (i - p.back());
            p.pop_back();
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}