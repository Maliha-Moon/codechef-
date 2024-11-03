#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
       vector<int> a(n);
        bool equal = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int minVal = *min_element(a.begin(), a.end());
    int maxVal = *max_element(a.begin(), a.end());
    //if (maxVal == minVal) 
    }
    return 0;
}
