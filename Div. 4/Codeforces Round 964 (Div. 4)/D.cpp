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
    string a,b;
    cin >> a >> b;
    int i = 0, j = 0;
    while (a[i] && b[j]) {
        while (a[i] && b[j] && (a[i] != '?' && a[i] != b[j])) i++;
        if (a[i] == '?') {
            a[i] = b[j];
            i++,j++;
        } else if (a[i] == b[j]) {
            i++,j++;
        }
    }
    if (b[j]) cout << "NO" << endl;
    else {
        for (int i = 0; a[i]; i++) {
            if (a[i] == '?') a[i] = 'a';
        }
        cout << "YES" << endl;
        cout << a << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}