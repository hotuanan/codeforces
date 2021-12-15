#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int height = 1;
    bool watered_yesterday = false;
    int today;
    cin >> today;
    if(today) {
        height++;
        watered_yesterday = true;
    }

    int i;
    for(i = 1; i < n; i++) {
        cin >> today;

        if(!today && !watered_yesterday) {
            height = -1;
            break;
        }
        else if(today && watered_yesterday) {
            height += 5;
            watered_yesterday = true;
        }
        else if(today && !watered_yesterday) {
            height++;
            watered_yesterday = true;
        }
        else watered_yesterday = false;
    }
    for(;i + 1 < n; i++) cin >> today;
    cout << height << endl;
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