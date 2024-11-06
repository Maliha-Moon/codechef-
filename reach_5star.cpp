#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (y < 0)
        cout << "NO" << endl;
    else if ((x + y) >= 2000)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}