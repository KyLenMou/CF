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
    s = '?' + s;
    vector<int> a(n+1),b(n+1);
    for (int i = 1; i <= n; i++) {
        a[i] = a[i-1] + (s[i] == '1');
        b[i] = b[i-1] + (s[i] == '0');
    }
    vector<pair<double,int>> ans;
    for (int i = 0; i <= n; i++) {
        if (b[i] >= (i + 1) / 2 && (a[n] - a[i]) >= (n - i + 1) / 2) {
            ans.push_back({abs((double)n/2-i),i});
        }
    }
    sort(ans.begin(),ans.end());
    cout << ans[0].y << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}