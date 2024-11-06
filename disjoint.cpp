#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int max_=0;
        int cnt=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            max_=max(a[i],max_);
            if(a[i]<max_){
              v.push_back(i);
              cnt = max(cnt,max_+a[i]);
            }
        }
    }
    return 0;
}