// difficulty: 930
/* -------------------------------------------------------------------------------------------------------------------------------------------------------
   Hoop Jump
Read problem statements in Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
You and your friend are playing a game with hoops. There are 
N
N hoops (where 
N
N is odd) in a row. You jump into hoop 
1
1, and your friend jumps into hoop 
N
N. Then you jump into hoop 
2
2, and after that, your friend jumps into hoop 
N
−
1
N−1, and so on.

The process ends when someone cannot make the next jump because the hoop is occupied by the other person. Find the last hoop that will be jumped into.

Input
The first line contains an integer 
T
T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, a single integer 
N
N.
Output
For each testcase, output in a single line the answer to the problem.

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
<
2
⋅
1
0
5
1≤N<2⋅10 
5
 
N
N is odd
Subtasks
Subtask #1 (100 points): original constraints

Sample 1:
Input
Output
2
1
3
1
2
Explanation:
Test Case 
1
1: Since there is only 
1
1 hoop, that's the only one to be jumped into.

Test Case 
2
2: The first player jumps into hoop 
1
1. The second player jumps into hoop 
3
3 and finally the first player jumps into hoop 
2
2. Then the second player cannot make another jump, so the process stops.
---------------------------------------------------------------------------------------------------------------------------------------------------------
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
        cin >>n;
        cout << (n+1)/2 << "\n";
    }
    return 0;
}
