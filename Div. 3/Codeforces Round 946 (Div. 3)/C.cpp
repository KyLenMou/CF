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

struct P {
    int num;
    map<int,int> mp;
};

void KyLen() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    map<array<int,3>,P> m;
    int ans = 0;
    for (int i = 1; i <= n - 2; i++) {
        array<int,3> c1,c2,c3;
        c1 = {0,a[i+1],a[i+2]};
        c2 = {a[i],0,a[i+2]};
        c3 = {a[i],a[i+1],0};
        ans += m[c1].num - m[c1].mp[a[i]];
        ans += m[c2].num - m[c2].mp[a[i+1]];
        ans += m[c3].num - m[c3].mp[a[i+2]];
        m[c1].num++;
        m[c1].mp[a[i]]++;
        m[c2].num++;
        m[c2].mp[a[i+1]]++; 
        m[c3].num++;
        m[c3].mp[a[i+2]]++;
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}