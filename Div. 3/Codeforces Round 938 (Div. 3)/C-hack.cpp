//  __      __          ___                                         ___    __ __
// /\ \  __/\ \        /\_ \                                      /'___'\ /\ \ \
// \ \ \/\ \ \ \     __\//\ \     ___    ___     ___ ___      __ /\_\ /\ \ \ \ \       __   __  __     __   _ __
//  \ \ \ \ \ \ \  /'__'\ \ \   /'___\ / __'\ /' __' __'\  /'__'\/_/// /__\ \ \ \_   /'__'\/\ \/\ \  /'__'\/\''__\
//   \ \ \_/ \_\ \/\  __/ \_\ \_/\ \__//\ \L\ \/\ \/\ \/\ \/\  __/  // /_\ \ \__ ,__\/\  __/\ \ \_/ |/\  __/\ \ \/
//    \ '\___x___/\ \____\/\____\ \____\ \____/\ \_\ \_\ \_\ \____\/\______/ \/_/\_\_/\ \____\ \___/ \ \____\ \_\
//     '\/__//__/  \/____/\/____/\/____/\/___/  \/_/\/_/\/_/\/____/\/_____/     \/_/   \/____/ \/__/   \/____/ \/_/
//   bilibili:24Records
//   link:https://space.bilibili.com/3546387113314828
#include "bits/stdc++.h"
using namespace std;
const int Welcome24ever = 0;
const int Mayuri = 1;
#define endl '\n'
#define int long long
#define fixset(x) fixed << setprecision(x)
typedef long long ll;
typedef pair<int,int> PII;
int dir8[8][2] = {{1,0},{0,1},{-1,0},{0,-1},
                  {1,1},{1,-1},{-1,1},{-1,-1}};
int dir4[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
inline int gcd(int a, int b){return b == 0 ? a : gcd(b, a % b);}
inline int lcm(int a, int b){return a / gcd(a, b) * b;}
inline int bitCnt(int n) {int ret = 0;while (n) {ret += (n&1);n>>=1;}return ret;}
const int MOD = 1e9 + 7;
const int N = 5e5+50;
long double pi = acos(-1);
void NeverSayNever() {
    int n,k; cin >> n >> k;
    vector<int> vec(n);
    for(auto & x : vec) cin >> x;
    deque<int> dq(vec.begin(), vec.end());
    int ans = 0;
    while(1){
        if(dq.empty()){
            cout << ans << endl;
            return;
        }
        if(k == 0){
            cout << ans << endl; return;
        }
        if(dq.size() == 1){
            if(k >= dq.front()){
                cout << ans + 1 << endl;
            }else{
                cout << ans << endl;
            }
            return;
        }
        if(dq.back() == dq.front()){
            if(dq.front() + dq.back() - 1 == k){
                cout << ans + 1 << endl; return;
            }else if(dq.front() + dq.back() <= k){
                k -= dq.front(); k -= dq.back();
                dq.pop_front(),dq.pop_back();
                ans += 2;
            }else{
                cout << ans << endl;return;
            }
        }else if(dq.back() < dq.front()){
            if(k >= dq.back() * 2){
                k -= dq.back() * 2; dq.front() -= dq.back();
                dq.pop_back();
                ans++;
            }else{
                cout << ans << endl; return;
            }
        }else if(dq.back() > dq.front()){
            if(dq.front() * 2 - 1 == k){
                cout << ans + 1 << endl; return;
            }else if(dq.front() * 2 <= k){
                k -= dq.front() * 2; dq.back() -= dq.front();
                dq.pop_front();
                ans++;
            }else{
                cout << ans << endl; return;
            }
        }
    }
}
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while (T--) {
        NeverSayNever();
    }
    return Welcome24ever;
}