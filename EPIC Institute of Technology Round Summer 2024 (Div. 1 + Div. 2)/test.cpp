#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "A<9#9hWpo#J^khiZWo#l_le#+&";
    for (auto &c : s) c += 10;
    cout << s;
}