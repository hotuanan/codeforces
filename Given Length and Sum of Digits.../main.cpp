#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int m, s;
    cin >> m >> s;
    vector<char> smaller(m);
    vector<char> bigger(m);
    fill(smaller.begin(), smaller.end(), '0');
    if(s == 0 && m > 1) {
        cout << "-1 -1\n";
        return;
    }
    int tmp = s;

    int curr_idx = 0;
    while(s >= 0 && curr_idx < m) {
        if(s > 9) {
            bigger[curr_idx] = '9';
            curr_idx++;
            s -= 9;
        }
        else {
            bigger[curr_idx] = s + '0';
            curr_idx++;
            s = 0;
        }
    }
    if(s > 0 || curr_idx < m) {
        cout << "-1 -1\n";
        return;
    }

    s = tmp;
    curr_idx = m - 1;
    while(s >= 0 && curr_idx >= 0) {
        if(s > 9) {
            smaller[curr_idx] = '9';
            curr_idx--;
            s -= 9;
        }
        else {
            if(curr_idx != 0) {
                smaller[curr_idx] = (s - 1) + '0';
                curr_idx = 0;
                s = 1;
                continue;
            }
            smaller[curr_idx] = s + '0';
            curr_idx--;
            s = 0;
        }
    }
    if(s > 0 || curr_idx > 0) {
        cout << "smaller\n";
        cout << "-1 -1\n";
        return;
    }
    
    string a(smaller.begin(), smaller.end());
    string b(bigger.begin(), bigger.end());
    cout << a << " " << b << endl;
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