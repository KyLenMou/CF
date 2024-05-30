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
    int n,m;
    cin >> n >> m;
    int t = n + m + 1; 
    vector<int> a(t+1), b(t+1);
    vector<vector<int>> c(2,vector<int>(t+1,0)), d(2,vector<int>(t+1,0));
    vector<int> cc(t+1), dd(t+1);
    for (int i = 1; i <= t; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= t; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= t; i++) {
        c[0][i] = c[0][i-1];
        d[0][i] = d[0][i-1];
        c[1][i] = c[1][i-1];
        d[1][i] = d[1][i-1];
        cc[i] = cc[i-1] + a[i];
        dd[i] = dd[i-1] + b[i];
        if (a[i] > b[i]) {
            c[0][i]++;
            d[0][i] += a[i];
        } else {
            c[1][i]++;
            d[1][i] += b[i];
        }
    }
    if (n > m) {
        int m1idx = upper_bound(begin(c[1])+1,end(c[1]),m) - begin(c[1]);
        int midx = m1idx-1;
        // cout << m1idx << ' ' << midx << endl;
        for (int i = 1; i < m1idx; i++) {
            int tt;
            if (a[i] > b[i]) tt = a[i];
            else tt = b[i];
            if (c[1][i] - c[1][i-1] == 0) {
                cout << d[0][midx] + d[1][midx] + cc[t] - cc[midx] - tt << ' ';
            } else {
                cout << d[0][m1idx] + d[1][m1idx] + cc[t] - cc[m1idx] - tt << ' ';
            }
        }
        for (int i = m1idx; i <= t; i++) {
            int tt;
            if (a[i] > b[i]) tt = a[i];
            else tt = b[i];
            cout << d[0][t] + d[1][t] - tt << ' ';
        }
    } else if (n <= m) {
        int m1idx = upper_bound(begin(c[0])+1,end(c[0]),n) - begin(c[0]);
        int midx = m1idx-1;
        for (int i = 1; i < m1idx; i++) {
            int tt;
            if (a[i] > b[i]) tt = a[i];
            else tt = b[i];
            if (c[0][i] - c[0][i-1] == 0) {
                cout << d[0][midx] + d[1][midx] + dd[t] - dd[midx] - tt << ' ';
            } else {
                cout << d[0][m1idx] + d[1][m1idx] + dd[t] - dd[m1idx] - tt << ' ';
            }
        }
        for (int i = m1idx; i <= t; i++) {
            int tt;
            if (a[i] > b[i]) tt = a[i];
            else tt = b[i];
            cout << d[0][t] + d[1][t] - tt << ' ';
        }
    }
    cout << endl;
    // for (int i = 1; i <= t; i++) {
    //     cout << c[i][0] << ' ';
    // } cout << endl;
    // for (int i = 1; i <= t; i++) {
    //     cout << c[i][1] << ' ';
    // } cout << endl;
    // for (int i = 1; i <= t; i++) {
    //     cout << cc[i] << ' ';
    // } cout << endl;
    // for (int i = 1; i <= t; i++) {
    //     cout << dd[i] << ' ';
    // } cout << endl;
    // for (int i = 1; i <= t; i++) {
    //     cout << d[i][0] << ' ';
    // } cout << endl;
    // for (int i = 1; i <= t; i++) {
    //     cout << d[i][1] << ' ';
    // } cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}