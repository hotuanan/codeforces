#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    int sum_a = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }
    int sum_b = 0;
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        sum_b += b[i];
    }
    if(sum_a != sum_b){
        cout << "-1\n";
        return;
    }
    
    int k = 0;
    vector<pair<int, int>> res;
    for(int i = 0; i < n; i++) {
        if(a[i] == b[i]) continue;
        for(int j = i + 1; j < n; j++) {
            if(a[j] == b[j]) continue;
            if(a[i] < b[i] && a[j] > b[j]) {
                while(a[i] != b[i] && a[j] > b[j]) {
                    k++;
                    res.push_back(make_pair(j + 1, i + 1));
                    a[i]++;
                    a[j]--;
                }
            }
            else if(a[i] > b[i] && a[j] < b[j]) {
                while(a[i] != b[i] && a[j] < b[j]) {
                    k++;
                    res.push_back(make_pair(i + 1, j + 1));
                    a[i]--;
                    a[j]++;
                }
            }

        }
    }
    cout << k << endl;
    for(auto p : res) cout << p.first << " " << p.second << endl;

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