#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int lo = 0;
    int hi = n -1;
    int i = 0;
    while(lo <= hi) {
        if(i & 1) {
            cout << a[hi];
            hi--;
        }
        else {
            cout << a[lo];
            lo++;
        }
        cout << " ";
        i++;
    }
    cout << endl;
}



int main()
{
    int t;
    cin >>t;
    while(t--)
        solve();

}