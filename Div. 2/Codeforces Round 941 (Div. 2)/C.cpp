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
    set<int> s;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        s.insert(t);
    }
    if (s.size() == 1) {
        cout << "Alice" << endl;
        return;
    }
    vector<int> a;
    a.push_back(-1); 
    for (auto x : s) a.push_back(x);
    sort(a.begin()+1,a.end());
    n = a.size() - 1;
    int num = 1;
    for (int i = 2; i <= n; i++) {
        if (a[i] - 1 == a[i-1]) {
            num++;
        } else break;
    }
    if (a[1] != 1) {
        cout << "Alice" << endl;
    } else {
        if (num & 1){
            if (num != n) cout << "Bob" << endl;
            else cout << "Alice" << endl;
        } 
        else {
            if (num == n) cout << "Bob" << endl;
            else cout << "Alice" << endl;
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}