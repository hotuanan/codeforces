#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void solve() 
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    vector<char> st;
    
    for (auto c : a) {
        if (st.empty() || st.back() == c) {
            st.push_back(c);
        }
        else {
            st.pop_back();
        }
    }

    cout << st.size() << endl;
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
