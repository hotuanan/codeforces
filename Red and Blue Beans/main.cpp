#include <bits/stdc++.h>
using namespace std;

void solve() 
{
   int red, blue, d;
   cin >> red >> blue >> d;

   float packets = min(red, blue);
   float rest =  max(red, blue) - packets;
   if((rest / packets) > d) cout << "NO\n";
   else cout << "YES\n";
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