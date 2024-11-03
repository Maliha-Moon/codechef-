#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        int a[n];
        int hap = 0, max_ = 0, min_ = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= l && a[i] <= r)
            {
                hap++;
                max_ = max(max_, hap);
            }
            else
            {
                hap--;
                min_ = min(min_, hap);
            }
        }
        cout << max_ << " " << min_ << endl;
    }
    return 0;
}