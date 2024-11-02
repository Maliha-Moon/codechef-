/*  Difficulty:  1025
Chef Diet

Chef decided to go on a diet during the following 
N
N days (numbered 
1
1 through 
N
N). Part of the diet plan is to eat 
K
K grams of protein during each day. For each valid 
i
i, Chef wants to buy 
A
i
A 
i
​
  grams of protein in the morning of the 
i
i-th day and then eat 
K
K grams of protein as part of his dinner. If he has any protein remaining, he can store it and use it in later dinners. Initially, Chef is storing 
0
0 grams of protein.

Determine whether Chef will have enough protein all the time during his diet. In case he will not have enough, find the first day on which Chef will be unable to eat 
K
K grams of protein.

Input
The first line of the input contains a single integer 
T
T denoting the number of test cases. The description of 
T
T test cases follows.
The first line of each test case contains two space-separated integers 
N
N and 
K
K.
The second line contains 
N
N space-separated integers 
A
1
,
A
2
,
…
,
A
N
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
 .
Output
For each test case:

If Chef will have enough protein during his diet, print a single line containing the string "YES".
Otherwise, print a single line containing the string "NO", followed by a space and one integer — the first day when Chef will be unable to eat 
K
K grams of protein.
Constraints
1
≤
T
≤
200
1≤T≤200
1
≤
N
≤
100
1≤N≤100
1
≤
K
≤
1
0
6
1≤K≤10 
6
 
1
≤
A
i
≤
1
0
6
1≤A 
i
​
 ≤10 
6
  for each valid 
i
i
Sample 1:
Input
Output
3
4 5
7 3 6 5
3 4
3 10 10
3 4
8 1 1
YES
NO 1
NO 3
Explanation:
Example case 1: On the first day, Chef buys 
7
7 grams, eats 
5
5 and stores 
2
2 grams for later. On the second day, he buys 
3
3 grams, so he has 
5
5 grams, which is just enough for the dinner on this day. On the third day, he buys 
6
6 grams, eats 
5
5 and stores 
1
1, and on the fourth day, he buys 
5
5 grams, so he has 
6
6 grams — enough for dinner. In the end, he had enough protein to eat during all four dinners.

Example case 2: Chef needs to eat 
4
4 grams of protein on the first day, but he only has 
3
3 grams, so he does not have a sufficient amount of protein already for the first dinner.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int rem = 0;
        bool enough = true;
        int failDay = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = rem + a[i];
            if (a[i] >= k)
            {
                rem = a[i] - k;
            }
            else
            {
                if (enough)
                {
                    enough = false;
                    failDay = i;
                }
            }
        }
        if (enough)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO " << failDay + 1 << endl;
        }
    }
    return 0;
}
