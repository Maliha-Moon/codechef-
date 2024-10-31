/* Difficulty:1201
Superincreasing
An array 
A
A of length 
N
N containing positive integers is said to be superincreasing if each element is strictly greater than the sum of all the previous elements.

That is, for each 
i
i from 
2
2 to 
N
N, the condition

A
i
>
A
1
+
A
2
+
…
+
A
i
−
1
A 
i
​
 >A 
1
​
 +A 
2
​
 +…+A 
i−1
​
 
should hold.
For example, 
A
=
[
3
,
5
,
10
,
42
]
A=[3,5,10,42] is a superincreasing array, while 
A
=
[
1
,
2
,
3
]
A=[1,2,3] is not (
3
=
1
+
2
3=1+2, but it should be strictly greater than that).

Chef had a superincreasing array 
A
A of length 
N
N with him a long time ago, but has forgotten all its elements now.
The only piece of information he recalls is that the value 
X
X occurred at index 
K
K of the array, i.e, 
A
K
=
X
A 
K
​
 =X.

Can you tell Chef if he recalls correctly?
That is, does there exist a superincreasing array 
A
A of length 
N
N such that 
A
K
=
X
A 
K
​
 =X?

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first and only line of each test case contains three space-separated integers 
N
,
K
,
N,K, and 
X
X — the length of 
A
A, the index at which 
X
X occurs, and the value 
X
X.
Output Format
For each test case, output on a new line the answer: Yes if a valid superincreasing array exists, and No otherwise.

Each letter of the output may be printed in either uppercase or lowercase, i.e, the strings NO, no, No, and nO` will all be treated as equivalent.

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
K
≤
N
≤
2
⋅
1
0
5
1≤K≤N≤2⋅10 
5
 
1
≤
X
≤
1
0
9
1≤X≤10 
9
 
The sum of 
N
N across all tests won't exceed 
2
⋅
1
0
5
2⋅10 
5
 .
Sample 1:
Input
Output
4
3 2 3
3 3 3
5 3 6
6 2 1
Yes
No
Yes
No
Explanation:
Test case 
1
1: We have 
N
=
3
,
K
=
2
,
X
=
3
N=3,K=2,X=3.
Consider the array 
A
=
[
1
,
3
,
10
]
A=[1,3,10]. It's superincreasing because 
3
>
1
3>1 and 
10
>
1
+
3
10>1+3, and has 
A
2
=
3
A 
2
​
 =3, as desired.

Test case 
2
2: We have 
N
=
3
,
K
=
3
,
X
=
3
N=3,K=3,X=3.
It can be shown that no superincreasing array of length 
3
3 that contains positive integers can have 
A
3
=
3
A 
3
​
 =3.
Note that 
A
=
[
1
,
2
,
3
]
A=[1,2,3] is not superincreasing: 
A
3
A 
3
​
  should be strictly larger than 
A
1
+
A
2
A 
1
​
 +A 
2
​
 .

Test case 
3
3: One example of a valid array is 
A
=
[
2
,
3
,
6
,
15
,
60
]
A=[2,3,6,15,60].

Did you like the problem statement?
116 users found this helpful
More Info
Time limit1 secs
Memory limit1.5 GB
Source Limit50000 Bytes
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
        int N, K;
        long long X;
        cin >> N >> K >> X;
        /*if (X >= pow(2, K - 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }*/

        // if K=31 -> 2^(K-1) > 10^9(X)
        // spacial test case
        if (K >= 30)
        {
            cout << "NO" << endl;
        }

        int minvalue = 1 << (K - 1); //bit
        if (X >= minvalue)
            cout << "YES" << endl;
    }

    return 0;
}