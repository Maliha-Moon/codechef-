/* difficulty: 1193
Retrieve the Array
Chef has an array 
A
A of length 
N
N.

Let 
f
(
i
)
f(i) denote the sum 
A
1
+
A
2
+
⋯
+
A
i
 
A 
1
​
 +A 
2
​
 +⋯+A 
i
​
  and let 
g
(
i
)
g(i) denote the sum 
A
i
+
A
i
+
1
+
⋯
+
A
N
A 
i
​
 +A 
i+1
​
 +⋯+A 
N
​
 .

Chef creates another array 
B
B of length 
N
N such that 
B
i
=
f
(
i
)
+
g
(
i
)
B 
i
​
 =f(i)+g(i) for all 
1
≤
i
≤
N
1≤i≤N.

Now, Chef has lost the original array 
A
A and needs your help to recover it, given array 
B
B. It is guaranteed that Chef has obtained the array 
B
B from a valid array 
A
A.
Input Format
The first line contains a single integer 
T
T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer 
N
N — the size of the array 
A
A.
The second line of each test case contains 
N
N space-separated integers 
B
1
,
B
2
,
…
,
B
N
B 
1
​
 ,B 
2
​
 ,…,B 
N
​
  denoting the array 
B
B.
Output Format
For each testcase, output 
N
N space separated integers 
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
  denoting the array 
A
A.

Note that 
1
≤
A
i
≤
1
0
5
1≤A 
i
​
 ≤10 
5
  must hold for all 
1
≤
i
≤
N
1≤i≤N and it is guaranteed that a valid array 
A
A that meets these constraints exists.

If there are multiple answers, output any.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
N
≤
1
0
5
1≤N≤10 
5
 
1
≤
B
i
≤
2
⋅
1
0
10
1≤B 
i
​
 ≤2⋅10 
10
 
Th sum of 
N
N over all test cases does not exceed 
1
0
5
10 
5
 .
1
≤
A
i
≤
1
0
5
1≤A 
i
​
 ≤10 
5
 
It is guaranteed that a valid array 
A
A always exists.
Sample 1:
Input
Output
4
1
6
3
7 8 9
4
13 15 13 14
2
25 20
3 
1 2 3 
2 4 2 3 
10 5 
Explanation:
Test case 1: For 
A
=
[
3
]
A=[3], 
B
=
[
6
]
B=[6]. 
B
1
=
f
(
1
)
+
g
(
1
)
=
3
+
3
=
6
B 
1
​
 =f(1)+g(1)=3+3=6.

Test case 2: For 
A
=
[
1
,
2
,
3
]
A=[1,2,3], 
B
=
[
7
,
8
,
9
]
B=[7,8,9].

B
1
=
f
(
1
)
+
g
(
1
)
=
1
‾
+
1
+
2
+
3
‾
=
7
B 
1
​
 =f(1)+g(1)= 
1
​
 + 
1+2+3
​
 =7
B
2
=
f
(
2
)
+
g
(
2
)
=
1
+
2
‾
+
2
+
3
‾
=
8
B 
2
​
 =f(2)+g(2)= 
1+2
​
 + 
2+3
​
 =8
B
3
=
f
(
3
)
+
g
(
3
)
=
1
+
2
+
3
‾
+
3
‾
=
9
B 
3
​
 =f(3)+g(3)= 
1+2+3
​
 + 
3
​
 =9
*/

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
        int B[n];
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }
        int A[n];
        A[0] = 0; // even
        for (int i = 0; i < n; i++)
        {
            if (B[i] == 1) // odd
            {
                if (A[i] == 0)    // even
                    A[i + 1] = 1; // odd
                else              // odd
                    A[i + 1] = 0; // even
            }
            else
            {
                if (A[i] == 0)    // even
                    A[i + 1] = 0; // even
                else              // odd
                    A[i + 1] = 1; // odd
            }
        }
        if (B[n - 1] == 1)
        {
            if (A[n - 1] == 0 && A[0] == 1)
                cout << "YES" << endl;
            else if (A[n - 1] == 1 && A[0] == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            // cout << ((A[n-1]==0 && A[0]==1)? "YES":"NO") << endl;
        }
        else if (B[n - 1] == 0)
        {
            if (A[n - 1] == 0 && A[0] == 0)
                cout << "YES" << endl;
            else if (A[n - 1] == 1 && A[0] == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}