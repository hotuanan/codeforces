#include <bits/stdc++.h>
#include <string>
using namespace std;


int calc_imp(string a) {
    int res = 0;
    for (int i = 0; i < a.length() - 1; i++) {
        if (a[i] == a[i + 1]) res++;
    }
    return res;
}

void solve()
{
    int n;
    string a;
    cin >> n >> a;
    string res(a);

    char last = 'R';
    for (int i = 0; i < n; i++) {
        if (a[i] == '?') {
            if (last == 'R') last = 'B';
            else last = 'R';
            res[i] = last;
        }
        else if (i < n - 1) {
            if (a[i + 1] == '?') {
                if (a[i] == 'B') {
                    res[i + 1] = 'R';
                    last = 'R';
                }
                else {
                    res[i + 1] = 'B';
                    last = 'B';
                }
                i++;
            }
        }
    }
    string res2(a);
    last = 'B';
    for (int i = 0; i < n; i++) {
        if (a[i] == '?') {
            if (last == 'R') last = 'B';
            else last = 'R';
            res2[i] = last;
        }
        else if (i < n - 1) {
            if (a[i + 1] == '?') {
                if (a[i] == 'B') {
                    res2[i + 1] = 'R';
                    last = 'R';
                }
                else {
                    res2[i + 1] = 'B';
                    last = 'B';
                }
                i++;
            }
        }
    }
    if (calc_imp(res) < calc_imp(res2)) {
        cout << res << endl;
    }
    else cout << res2 << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}