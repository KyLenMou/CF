/* \/\ \         /\ \                       
\ \ \/'/'  __  __\ \ \         __    ___    
 \ \ , <  /\ \/\ \\ \ \  __  /'__`\/' _ `\  
  \ \ \\`\\ \ \_\ \\ \ \L\ \/\  __//\ \/\ \ 
   \ \_\ \_\/`____ \\ \____/\ \____\ \_\ \_\
    \/_/\/_/`/___/> \\/___/  \/____/\/_/\/_/
               /\___/                       
       ___ ___ \/__/                                       
     /' __` __`\                                         
     /\ \/\ \/\ \    ___   __  __                                 
     \ \ \ \ \ \ \  / __`\/\ \/\ \                                 
      \ \ \ \ \ \ \/\ \L\ \ \ \_\ \                                 
       \ \ \ \ \ \ \ \____/\ \____/                                 
        \/_/\/_/\/_/\/___/  \/__*/                                 
#include<bits/stdc++.h>
#define RainRingBell int32_t main()
#define KyLen ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define Kshqsz int T;cin >> T;while(T--) solve()
#define Kitto return 0
#define x first
#define y second
#define endl '\n'
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
#define int long long
using namespace std;

void solve() {
    int n,c;
    cin >> n >> c;
    vector<int> a(n+1), b(2);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[a[i]&1]++;
    }
    // 总
    int num = (c + 2) * (c + 1) / 2;
    // x + y
    for (int i = 1; i <= n; i++) {
        num -= (a[i] / 2) + 1;
    }
    // y - x
    for (int i = 1; i <= n; i++) {
        num -= c - a[i] + 1;
    }
    // 重复
    num += (b[0]+1)*(b[0])/2 + (b[1]+1)*(b[1])/2;
    cout << num << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
} 