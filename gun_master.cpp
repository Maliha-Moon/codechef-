/* Difficulty: 783
---------------------------------------------------------------------------------------------------------------------------
Gun Master
You have two guns: a close-range gun and a long-range gun.
The close-range gun can only shoot targets at distances less than or equal to 
D
D, while the long-range gun can only shoot targets at distances strictly greater than 
D
D.
You can only hold one gun at a time. Initially, you are holding the close-range gun.

You need to shoot at a series of 
N
N targets in order. The distance to the 
i
i-th target is 
A
i
A 
i
​
 .

Your task is to determine the minimum number of times you need to switch between the two guns to shoot all 
N
N targets in the given order.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains two space-separated integers 
N
N and 
D
D — the number of targets and the maximum effective range of the close-range gun.
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
 , denoting the distances to the 
N
N targets in order.
Output Format
For each test case, output on a new line the minimum number of gun switches required.

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
100
1≤N≤100
1
≤
A
i
,
D
≤
100
1≤A 
i
​
 ,D≤100
The sum of 
N
N across all test cases won't exceed 
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
4 2
2 1 3 4
4 1
2 3 4 1
3 5
4 3 2
6 2
3 2 3 2 3 2
1
2
0
6
Explanation:
Test case 
1
1: 
D
=
2
D=2, so you can shoot at targets at distances 
≤
2
≤2 using the close-range gun.
The targets are at distances 
[
2
,
1
,
3
,
4
]
[2,1,3,4], so the first two can be shot using the close-range gun and the last two using the long-range gun.
Only one switch is needed, between the second and third targets.

Test case 
2
2: 
D
=
1
D=1, and the targets are at distances 
[
2
,
3
,
4
,
1
]
[2,3,4,1].
The long-range gun must be used for the first three targets, and the close-range gun for the last target.
Since you're initially holding the close-range gun, two switches are required - before shooting the first target, and after shooting the third target.

Test case 
3
3: All targets can be shot using the close-range gun, so no switches are necessary.

Did you like the problem statement?
52 users found this helpful
More Info
Time limit1 secs
Memory limit1.5 GB
Source Limit50000 Bytes
----------------------------------------------------------------------------------------------------------------------------
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
        int n, d, switches = 0;
        cin >> n >> d;
        string gun = "close";
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (gun == "close")
            {
                if (arr[i] > d)
                {
                    switches++;
                    gun = "long";
                }
            }
            else
            {
                if (arr[i] <= d)
                {
                    switches++;
                    gun ="close";
                }
            }
        }
        cout << switches << "\n";
    }
    return 0;
}
