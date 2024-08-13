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
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int T1;
    cin >> T1;
    while (T1--) {
        string s;
        cin >> s;
        int len = s.size();
        if (len != n) {
            cout << "NO" << endl;
            continue;
        }
        s = "?" + s;
        map<char,int> m;
        for (char i = 'a'; i <= 'z'; i++) {
            m[i] = 1e18;
        }
        set<int> st;
        int flag = 1;
        for (int i = 1; i <= n; i++) {
            if (m[s[i]] == 1e18) {
                if (st.count(a[i]) > 0) {
                    flag = 0;
                    break;
                }
                m[s[i]] = a[i];
            }
            else {
                if (m[s[i]] != a[i]) {
                    flag = 0;
                    break;
                }
            }
            st.insert(a[i]);
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}