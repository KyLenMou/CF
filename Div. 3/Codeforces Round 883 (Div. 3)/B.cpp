#include<bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define endl '\n'
#define ll long long
#define pq(x) priority_queue<x,vector<x>,greater<x>>
#define PQ(x) priority_queue<x>
using namespace std;
typedef pair<int,int> PII;

const int N = 0;

string g[3];

bool f(char c)
{
    for (int i = 0; i < 3; i++) 
        {
            bool flag = true;
            for (int j = 0; j < 3; j++)
                if (g[i][j] != c) flag = false;
            if (flag) return true;
        }
        
        for (int i = 0; i < 3; i++) 
        {
            bool flag = true;
            for (int j = 0; j < 3; j++)
                if (g[j][i] != c) flag = false;
            if (flag) return true;
        }
        
        if (g[0][0] == c && g[1][1] == c && g[2][2] == c || g[0][2] == c && g[1][1] == c && g[2][0] == c) return true;
        return false;
}

void solve(){
    cin >> g[0] >> g[1] >> g[2];

    char t[] = {'X','O','+'};
    for (int i = 0; i < 3; i++)
    {
        if (f(t[i])) 
        {
            cout << t[i] << endl; 
            return;
        }
    }
    cout << "DRAW" << endl;
}

int main()
{
	IOS;
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
