#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second

using namespace std;

typedef pair<int,int> PII;

void solve(){
    int n,m,k;
    string s;
    cin >> n >> m >> k >> s;
    int cnt = 1;
    for (int i = 0;i<n;i++){
        if (s[i] == 'L') {
            cnt = 0;
        }else if (s[i] == 'W'){
            if (cnt >= m){
                k --;
                if (k < 0){
                    cout << "NO\n";
                    return;
                }
            }
        }else{
            if (cnt >= m) {
                cout << "NO\n";
                return;
            }
        }
        cnt++;
    }
    cout << "YES\n";
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }

}