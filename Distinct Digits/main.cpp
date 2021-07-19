#include <bits/stdc++.h>
using namespace std;

bool is_distinct(string num) {
    unordered_set<char> seen;
    for(int i = 0; i < num.length(); i++) {
        if(seen.find(num[i]) == seen.end()) seen.insert(num[i]);
        else return false;
    }
    return true;
}

void solve() 
{
    int l, r;
    cin >> l >> r;
    
    while(l <= r) {
        if(is_distinct(to_string(l))) {
            break;
        }
        l++;
    }
    cout << (l > r ? -1 : l) << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t;
    // cin >> t;
    // while(t--)
        solve();
}