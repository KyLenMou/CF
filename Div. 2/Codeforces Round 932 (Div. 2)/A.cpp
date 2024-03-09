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
    int n;
    string s;
    cin >> n >> s;
    n = s.size();
    int flag = 0;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] < s[n-i-1]) {
            flag = 1;
            break;
        }
        else if (s[i] > s[n-i-1]) {
            flag = 2;
            break;
        }
    }
    if (flag < 2) {
        cout << s << endl;
    } else {
        for (int i = s.size() - 1; i >= 0; i--) cout << s[i];
        cout << s << endl;
    }
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}