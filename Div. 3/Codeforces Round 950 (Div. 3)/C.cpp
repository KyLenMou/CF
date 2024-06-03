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
    int n,m;
    cin >> n;
    vector<int> a(n+1), b(n+1);
    map<int,int> m1,m2,m3;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        if (a[i] != b[i]) {
            m1[b[i]]++;
        } else {
            m3[b[i]]++;
        }
    }
    cin >> m;
    vector<int> d(m+1);
    int last;
    for (int i = 1; i <= m; i++) {
        cin >> d[i];
        m2[d[i]]++;
        if (i == m) last = d[i];
    }
    if (m1[last] == 0 && m3[last] == 0) {    
        cout << "NO" << endl;
        return;
    }
    for (auto [x,y] : m1) {
        if (m2[x] < y) {
            cout << "NO" << endl;
            return;
        }
    }
    if (m1.size() == 0 && m3[last] == 0) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}