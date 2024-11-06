#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int at[n], ad[n], pt[n], pd[n];
        int sumat = 0, sumad = 0, sumpt = 0, sumpd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> at[i];
            sumat += at[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ad[i];
            sumad += ad[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> pt[i];
            sumpt += pt[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> pd[i];
            sumpd += pd[i];
        }

        if (sumat > sumpt && sumad > sumpd)
            cout << "A" << endl;
        else if (sumat < sumpt && sumad < sumpd)
            cout << "P" << endl;
        else
            cout << "DRAW" << endl;
    }
    return 0;
}
