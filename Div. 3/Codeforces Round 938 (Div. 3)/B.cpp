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
    int n,c,d;
    cin >> n >> c >> d;
    vector<int> a(n*n+1);
    map<int,int> m;
    int mina = 1e9;
    for (int i = 1; i <= n * n; i++) {
        cin >> a[i];
        mina = min(mina,a[i]);
    }
    for (int i = 1; i <= n * n; i++) {
        // cout << a[i] << ' ';
        a[i] -= mina - 1;
    } 
    for (int i = 1; i <= n * n; i++) {
        m[a[i]]++;
    }
    // cout << endl;
    if (c > d) {
        swap(c,d);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x = 1 + i * d + j * c;
            m[x]--;
        }
    }
    for (auto [x,y] : m) {
        if (y) {
            cout << "NO" << endl;
            return;
        }
        // cout << x << ' ' << y << endl;
    }
    cout << "YES" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}