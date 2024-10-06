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
    int n,x;
    cin >> n >> x;
    vector<int> aa(n+1);
    int mex = 0;
    for (int i = 1; i <= n; i++) {
        cin >> aa[i];
    }
    sort(begin(aa),end(aa));
    vector<int> a;
    for (int i = 1; i <= n; i++) {
        if (aa[i] == mex) {
            mex++;
        } else {
            a.push_back(aa[i]);
        }
    }
    // for (auto it : a) {
    //     cout << it << ' ';
    // }
    // cout << endl;
    // cout << mex << endl;
    while (1) {
        vector<int> temp;
        int flag = 1;
        for (auto it : a) {
            if (mex >= it && (mex - it) % x == 0) {
                mex++;
                flag = 0;
            }
            else {
                temp.push_back(it);
            }
        }
        if (flag) {
            break;
        }
        a = temp;
    }
    cout << mex << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T; cin >> T; while(T--) KyLen();
    return 0;
}