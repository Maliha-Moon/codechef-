/* Swapping Marks Digits
Alice scored 
A
A marks and Bob scored 
B
B marks in an exam. Both 
A
A and 
B
B are two-digit numbers that don't contain the digit 
0
0.

Alice wants her marks to display higher than Bob's.
For this, she can reverse her score and/or Bob's score.

Is there a way for her score to display higher than Bob's?

For example, if 
A
=
37
A=37 and 
B
=
83
B=83, Alice can reverse her score to make it 
73
73, and also reverse Bob's score to make it 
38
38, and now her score is higher.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first and only line of each test case contains two space-separated integers 
A
A and 
B
B — the marks obtained by Alice and Bob, respectively.
Output Format
For each test case, output on a new line the answer: "Yes" if Alice can change her score to display higher than Bob's, and "No" otherwise (without quotes).

Each letter of the output may be printed in either uppercase or lowercase, i.e, the strings No, no, NO, and nO will all be treated as equivalent.

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
 
11
≤
A
,
B
<
100
11≤A,B<100
A
A and 
B
B don't contain 
0
0 in their decimal representation.
Sample 1:
Input
Output
5
14 41
45 53
58 86
54 82
12 34
Yes
Yes
Yes
Yes
No
Explanation:
Test case 
1
1: Alice can reverse her score to get 
41
41, and also reverse Bob's score to make it 
14
14.

Test case 
2
2: Alice can reverse her score to get 
54
54, and leave Bob's score unchanged.

Test case 
3
3: Alice can reverse her score to get 
85
85, and also reverse Bob's score to make it 
68
68.

Test case 
4
4: Alice can leave her score unchanged, and reverse Bob's score to make it 
28
28.

Test case 
5
5: No matter what Alice does, her score cannot exceed Bob's.

accepted
Accepted
14052
total-Submissions
Submissions
50970
accuracy
Accuracy
31.58
Did you like the problem statement?
72 users found this helpful
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
        int a, b;
        cin >> a >> b;
        int x, y;
        string sa = to_string(a);
        reverse(sa.begin(), sa.end());
        x = stoi(sa);
        string sb = to_string(b);
        reverse(sb.begin(), sb.end());
        y = stoi(sb);
        if (a > b)
            cout << "YES\n";
        else if (x > b)
            cout << "YES\n";
        else if (x > y)
            cout << "YES\n";
        else if (a > y)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
