#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void solve() 
{
    int y, w;
    cin >> y >> w;
    int nom = 7 - max(y, w);

    int g = gcd(nom, 6);

    cout << nom/g << "/" << 6/g << endl;

}

int main()
{
    solve();
}