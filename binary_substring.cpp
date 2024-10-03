/* Binary Substring
You are given a binary string 
S
S of even length 
N
N.
You can perform the following operation on string 
S
S any number of times:

Select two indices 
i
i and 
j
j where 
1
≤
i
<
j
<
N
1≤i<j<N, and both 
i
i and 
j
j are odd;
Swap 
S
i
S 
i
​
  with 
S
j
S 
j
​
 ;
Swap 
S
i
+
1
S 
i+1
​
  with 
S
j
+
1
S 
j+1
​
 .
Find the maximum length of a non-decreasing substring of the string you can obtain using any (possibly zero) number of operations.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer 
N
N — denoting length of the binary string.
The next line contains a binary string 
S
S of length 
N
N.
Output Format
For each test case, output on a new line, the maximum length of a non-decreasing substring of the string you can obtain using any (possibly zero) number of operations.

Constraints
1
≤
T
≤
1.5
⋅
1
0
5
1≤T≤1.5⋅10 
5
 
2
≤
N
≤
3
⋅
1
0
5
,
 
N
2≤N≤3⋅10 
5
 , N is even.
S
i
∈
{
0
,
1
}
S 
i
​
 ∈{0,1}
The sum of 
N
N over all test cases won't exceed 
3
⋅
1
0
5
3⋅10 
5
 .
Sample 1:
Input
Output
3
6
110000
4
0110
8
00100011
6
3
7
Explanation:
Test case 
1
1: Given 
S
=
110000
S=110000.

Select indices 
1
1 and 
5
5 for the operation. The resulting string is 
000011
000011.
The maximum length non-decreasing substring is 
000011
000011 with length 
6
6.

Test case 
2
2: Given 
S
=
0110
S=0110.

Select indices 
1
1 and 
3
3 for the operation. The resulting string is 
1001
1001.
The maximum length non-decreasing substring is 
001
001 with length 
3
3.
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
        string s;
        cin >> s;
        vector<int> v(4, 0);
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                v[0]++;
            }
            else if (s[i] == '0' && s[i + 1] == '1')
            {
                v[1]++;
            }
            else if (s[i] == '1' && s[i + 1] == '1')
            {
                v[2]++;
            }
            else
            {
                v[3]++;
            }
        }
        int ans = 0;
        if (v[3])
        {
            ans = 1;
            v[3]--;
        }
        ans += 2 * v[0];
        if (v[1])
        {
            ans += 2;
        }
        ans += 2 * v[2];
        if (v[3])
        {
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}