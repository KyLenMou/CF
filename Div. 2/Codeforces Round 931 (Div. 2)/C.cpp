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
#define int long long
using namespace std;

void KyLen() {
    int n,m;
    cin >> n >> m;
    auto ask = [&] (int x, int y) {
        cout << "? " << x << " " << y << endl;
        int c;
        cin >> c;
        return c;
    };
    auto resp = [&] (int x, int y) {
        cout << "! " << x << " " << y << endl;
    };
    int a = ask(1,1);
    int b = ask(1,m);
    int c = ask(n,1);
    int x1 = (a + b + 3 - m) / 2, y1 = (a - b + 1 + m) / 2;
    int x2 = (a - c + 1 + n) / 2, y2 = (a + c + 3 - n) / 2;
    if (x1 <= 0 || y1 <= 0 || x1 > n || y2 > m) {
        resp(x2,y2);
        return;
    }
    int d = ask(x1,y1);
    if (d == 0) resp(x1,y1);
    else resp(x2,y2);
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
} 