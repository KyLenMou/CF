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
    int a,b,c;
    cin >> a >> b >> c;
    if (a == 0) {
        if (c != 1) {
            cout << -1 << endl;
            return;
        }
        cout << b << endl;
        return;
    }
    int stage = ceil(log(a+1)/log(2));
    int stage_sum = pow(2,stage) - 1;
    int stage_extra = (a - pow(2,stage-1) + 1);
    int stage_remain = pow(2,stage-1) - stage_extra;
    int lines = stage_remain + stage_extra * 2;
    // cout << stage << " " << stage_sum << " " << stage_extra << " " << stage_remain << " " << lines << endl;
    if (c != lines) {
        cout << -1 << endl;
        return;
    }
    if (b <= stage_remain) {
        cout << stage + (c > stage_remain - b) - 1 << endl;
        return;
    }
    cout << stage + (b - stage_remain) / lines + (c > lines - (b - stage_remain) % lines) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}