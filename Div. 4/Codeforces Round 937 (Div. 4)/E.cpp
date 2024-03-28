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
    string s;
    cin >> s;
    s = '?' + s;
    vector<int> a;
    for (int i = 1; i <= n / i; i++) {
        if (n % i == 0) {
            a.push_back(i);
            if (i * i != n) a.push_back(n / i);
        }
    }
    sort(a.begin(), a.end());
    for (int k = 0; k < a.size(); k++) {
        int flag = 0;
        int d = a[k];
        // cout << d << endl;
        for (int i = 1; i <= d; i++) {
            map<int,int> m;
            for (int j = i; j <= n; j += d) {
                m[s[j]]++;
            }
            if (m.size() == 2) {
                int flag1 = 1000000000;
                for (auto [u,v] : m) {
                    flag1 = min(flag1,v);
                }
                if (flag1 != 1) {
                    flag = 2;
                    break;
                }
                if (flag == 0) flag = 1;
                else {
                    flag = 2;
                    break;
                }
            }
            if (m.size() > 2) {
                flag = 2;
                break;
            }
        }
        if (flag <= 1) {
            cout << d << endl;
            return;
        }
    }
    cout << n << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
} 