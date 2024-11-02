#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int cnt = n / 2;
        sum = (cnt * (2 * 6)) + ((n - cnt) * 1);
        cout << sum << endl;
    }
    return 0;
}
