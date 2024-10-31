/* Difficulty:1270
Permutation Disturbance
Chef likes to create disturbance in numbers. In other words, he does not like when numbers are in their right positions.

He has a permutation 
P
P of size 
N
N. In one operation, he can swap any two adjacent elements.
His goal is to alter the permutation in such a way that 
P
i
≠
i
P 
i
​
 =i satisfies for all 
1
≤
i
≤
N
1≤i≤N.

Help Chef find the minimum number of operations required to reach his goal.

Note that a permutation of size 
N
N is a sequence of integers consisting of all integers from 
1
1 to 
N
N exactly once.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first line of each test case contains a single integer 
N
N, denoting the size of the permutation.
The second line of each test case contains 
N
N space-separated integers, representing the permutation 
P
P.
Output Format
For each test case, output on a new line, the minimum number of operations required by Chef to reach his goal.

Constraints
1
≤
T
≤
1
0
4
1≤T≤10 
4
 
2
≤
N
≤
1
0
5
2≤N≤10 
5
 
It is guaranteed that 
P
P denotes a permutation.
The sum of 
N
N over all test cases won't exceed 
1
0
5
10 
5
 .
Sample 1:
Input
Output
3
3
3 1 2
2
1 2
4
3 2 1 4
0
1
2
Explanation:
Test case 
1
1: Each element in the permutation already satisfies the condition, hence 
0
0 operations are required.

Test case 
2
2: After swapping the two elements in one operation, both satisfy the condition.

Test case 
3
3: We require a minimum of 
2
2 operations.

In the first operation, we swap second and third elements. The permutation becomes 
[
3
,
1
,
2
,
4
]
[3,1,2,4].
In the second operation, we swap third and fourth elements.
The final permutation is 
[
3
,
1
,
4
,
2
]
[3,1,4,2] which satisfies the conditions.

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
        int n, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == i + 1)
            {
                count++;
                i++;
            }
        }
        cout << count << endl;
    }
    return 0;
}