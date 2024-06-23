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
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x;
        a[i].y = i;
    }
    sort(a.begin()+1,a.end(),[&](pair<int,int> x,pair<int,int> y) {
        if (x.x == y.x) return x.y < y.y;
        return x.x < y.x;
    });
    vector<pair<int,int>> b;
    b.push_back(a[1]);
    for (int i = 2; i <= n; i++) {
        if (a[i].x == a[i-1].x) b.pop_back();
        else {
            b.push_back(a[i]);
        }
    }
    map<int,vector<int>> m;
    for (auto [x,y] : b) {
        // cout << x << ' ' << y << endl;
        m[x%k].push_back(x);
    }
    int flag = 0;
    int ans = 0;
    for (auto [x,z] : m) {
        if (z.size() % 2 == 1) {
            flag++;
            if (flag >= 2) {
                cout << "-1" << endl;
                return;
            }
            vector<int> pr(z.size()+3), su(z.size()+3), pre(z.size()+3), suf(z.size()+3);
            cout << z[0] << ' ';
            for (int i = 1; i <= z.size(); i++) {
                cout << z[i] << ' ';
                pr[i] = z[i] - z[i-1];
                pre[i] = pre[i-1] + pr[i];
            }
            cout << endl;
            for (int i = z.size(); i >= 0; i--) {
                su[i] = z[i+1] - z[i];
                if (i < z.size() - 1) suf[i] = suf[i+1] + su[i];
            }
            for (int i = 0; i <= z.size(); i++) {
                cout << pr[i] << ' ';
            }
            cout << endl;
            for (int i = 0; i <= z.size(); i++) {
                cout << pre[i] << ' ';
            }
            cout << endl;
            for (int i = 0; i <= z.size(); i++) {
                cout << su[i] << ' ';
            }
            cout << endl;
            for (int i = 0; i <= z.size(); i++) {
                cout << suf[i] << ' ';
            }
            cout << endl;
            // 去掉奇数位
            for (int i = 2; i <= z.size(); i+=2) {
                int ans = min(ans, pre[i-1] + suf[i+1]);
            }
        } else {
            for (int i = 1; i < z.size(); i+=2) {
                ans += (z[i] - z[i-1]) / k;
            }
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}