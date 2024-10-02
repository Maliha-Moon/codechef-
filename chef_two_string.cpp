// 1028
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
       string s1,s2;
       cin >> s1 >> s2;
       vector<pair<char,char>> p;
       for(int i=0; i<s1.size();i++){
        p[i].first = s1[i];
        p[i].second = s2[i];
       }
       int match =0;
       for(int i=0; i<s1.size();i++){
        
         if(p[i].first != p[i].second )
         match++;
           }
       cout << match << " ";

    }
    return 0;
}
