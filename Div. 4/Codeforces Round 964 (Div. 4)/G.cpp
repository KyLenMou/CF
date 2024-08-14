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
    auto ask = [&](int a, int b) {
        cout << "? " << a << " " << b << endl;
        int re;
        cin >> re;
        return re;
    };
    int L = 1, R = 999;
    while (L < R) {
        int a = L + (R - L) / 3;
        int b = R - (R - L) / 3;
        int r = ask(a,b);
        if (a * b == r) L = b + 1;
        else if (a * (b + 1) == r || (a + 1) * b == r) {
            L = a + 1, R = b;
        } else {
            R = a;
        }
    }
    cout << "! " << L << endl;
}

int32_t main() {
    int T; cin >> T; while(T--) KyLen();
    return 0;
}