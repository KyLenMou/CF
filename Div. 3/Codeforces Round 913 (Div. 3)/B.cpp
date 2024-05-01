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
    string s;
    cin >> s;
    int n = s.size();
    s = "?" + s;
    vector<pair<char,int>> a,A;
    for (int i = 1; i <= n; i++) {
        if (s[i] == 'b') {
            if (a.size()) a.pop_back();
        }
        else if (s[i] == 'B') {
            if (A.size()) A.pop_back();
        }
        else {
            if (s[i] >= 'a' && s[i] <= 'z') a.push_back({s[i],i});
            else A.push_back({s[i],i});
        }
    }
    vector<char> ans(n+1);
    for (auto i : a) ans[i.y] = i.x;
    for (auto i : A) ans[i.y] = i.x;
    for (int i = 1; i <= n; i++) {
        if (ans[i]) cout << ans[i];
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}