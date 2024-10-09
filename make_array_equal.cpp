/* Difficulty:  1263
----------------------------------------------------------------------------------------------------------------------------
Make My Array Equal
You are given an array 
A
A of length 
N
N.
Determine if it is possible to make all the elements of 
A
A equal by performing the following operation any number of times (possibly, zero):

Choose two distinct indices 
i
i and 
j
j (
1
≤
i
,
j
≤
N
1≤i,j≤N, 
i
≠
j
i=j); and
Update the value at index 
i
i by setting 
A
i
A 
i
​
  to 
A
i
+
A
j
A 
i
​
 +A 
j
​
 .
For example, if 
A
=
[
1
,
5
,
3
,
5
,
6
]
A=[1,5,3,5,6],

Choosing 
i
=
5
i=5 and 
j
=
3
j=3 would result in the array 
[
1
,
5
,
3
,
5
,
9
]
[1,5,3,5,9], since we replace 
A
5
A 
5
​
  with 
A
5
+
A
3
=
9
A 
5
​
 +A 
3
​
 =9.
Choosing 
i
=
2
i=2 and 
j
=
4
j=4 would instead result in the array 
[
1
,
10
,
3
,
5
,
6
]
[1,10,3,5,6].
Output "YES" if it is possible to make all elements of the array equal after performing several (possibly, zero) of these operations, otherwise output "NO" (without quotes).

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer 
N
N — the length of array.
The second line of each test case contains 
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
 , denoting the initial array.
Output Format
For each test case, print Yes if it is possible to make all elements of array equal using any number of operations, otherwise print No.

You may print each character of the output in either uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints
1
≤
T
≤
1
0
5
1≤T≤10 
5
 
1
≤
N
≤
2
⋅
1
0
5
1≤N≤2⋅10 
5
 
0
≤
A
i
≤
1
0
9
0≤A 
i
​
 ≤10 
9
 
The sum of 
N
N over all test cases won't exceed 
4
⋅
1
0
5
4⋅10 
5
 .
Sample 1:
Input
Output
3
3
1 1 1
2
1 2
3
1 0 0
YES
NO
YES
Explanation:
Test case 
1
1: All the elements of 
A
A are already equal.

Test case 
2
2: It can be shown that no matter how many operations are performed, it's not possible to make 
A
1
=
A
2
A 
1
​
 =A 
2
​
 .
Note that you aren't allowed to choose 
i
=
j
i=j.

Test case 
3
3: Consider the following sequence of operations:

Choose 
i
=
2
i=2 and 
j
=
1
j=1. The array becomes 
[
1
,
1
,
0
]
[1,1,0].
Choose 
i
=
3
i=3 and 
j
=
2
j=2. The array becomes 
[
1
,
1
,
1
]
[1,1,1].
All the elements are equal now, as desired.

Did you like the problem statement?
98 users found this helpful
More Info
Time limit1 secs
Memory limit1.5 GB
Source Limit50000 Bytes
-----------------------------------------------------------------------------------------------------------------------------
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
        int n;
        cin >> n;
        long long a[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
            {
                s.insert(a[i]);
            }
        }

        if (s.size() == 1 || s.size() == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
