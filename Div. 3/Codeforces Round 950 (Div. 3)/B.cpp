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
    int n,f,k;
    cin >> n >> f >> k;
    map<int,int> m;
    int num;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        m[t]++;
        if (i == f) num = t;
    }
    // 倒序遍历m
    int ans = 0;
    int front = 0;
    int cur = 0;
    for (auto it = m.rbegin(); it != m.rend(); it++) {
        int x = it->first, y = it->second;
        if (x != num) {
            front += y;
        }
        else {
            cur = y;
            break;
        }
    }
    if (k >= front + cur) {
        cout << "YES" << endl;
    }
    else if (k <= front) {
        cout << "NO" << endl;
    }
    else {
        cout << "MAYBE" << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}