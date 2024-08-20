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
    auto ask = [&] (int a, int b) {
        cout << "? " << a << ' ' << b << endl;
        int c;
        cin >> c;
        return c;
    };
    int n;
    cin >> n;
    vector<int> ans(n+1);
    for (int i = 2; i <= n; i++) {
        int cur = 1, temp = ask(1,i);
        while (cur != temp) {
            cur = temp;
            temp = ask(temp,i);
        }
        ans[i] = cur;
    }
    cout << "! ";
    for (int i = 2; i <= n; i++) {
        cout << i << ' ' << ans[i] << ' ';
    }
    cout << endl;
}

int32_t main() {
    int T; cin >> T; while(T--) KyLen();
    return 0;
}