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
    int a,b,l;
    cin >> a >> b >> l;
    if (a == b) {
        int num = 1;
        while (l % a == 0) {
            num++;
            l /= a;
        }
        cout << num << endl;
        return;
    }
    if (a > b) swap(a,b);
    int num1 = 0, num2 = 0;
    int t = l;
    while (t % a == 0) {
        num1++;
        t /= a; 
    }
    t = l;
    while (t % b == 0) {
        num2++;
        t /= b;
    }
    set<int> s;
    for (int i = 0; i <= num1; i++) {
        for (int j = 0; j <= num2; j++) {
            int t = pow(a,i)*pow(b,j);
            if (l % t == 0) s.insert(t);
        }
    }
    cout << s.size() << endl;
}

RainRingBell {
    KyLen;
    Kshqsz;
    Kitto;
}