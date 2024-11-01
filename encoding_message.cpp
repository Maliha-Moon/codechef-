/* Difficulty:  1027
Encoding Message
Read problems statements in Mandarin chinese, Russian and Vietnamese as well.
Chef recently graduated Computer Science in university, so he was looking for a job. He applied for several job offers, but he eventually settled for a software engineering job at ShareChat. Chef was very enthusiastic about his new job and the first mission assigned to him was to implement a message encoding feature to ensure the chat is private and secure.

Chef has a message, which is a string 
S
S with length 
N
N containing only lowercase English letters. It should be encoded in two steps as follows:

Swap the first and second character of the string 
S
S, then swap the 3rd and 4th character, then the 5th and 6th character and so on. If the length of 
S
S is odd, the last character should not be swapped with any other.
Replace each occurrence of the letter 'a' in the message obtained after the first step by the letter 'z', each occurrence of 'b' by 'y', each occurrence of 'c' by 'x', etc, and each occurrence of 'z' in the message obtained after the first step by 'a'.
The string produced in the second step is the encoded message. Help Chef and find this message.

Input
The first line of the input contains a single integer 
T
T denoting the number of test cases. The description of 
T
T test cases follows.
The first line of each test case contains a single integer 
N
N.
The second line contains the message string 
S
S.
Output
For each test case, print a single line containing one string — the encoded message.

Constraints
1
≤
T
≤
1
,
000
1≤T≤1,000
1
≤
N
≤
100
1≤N≤100
∣
S
∣
=
N
∣S∣=N
S
S contains only lowercase English letters
Sample 1:
Input
Output
2
9
sharechat
4
chef
shizxvzsg
sxuv
Explanation:
Example case 1: The original message is "sharechat". In the first step, we swap four pairs of letters (note that the last letter is not swapped), so it becomes "hsraceaht". In the second step, we replace the first letter ('h') by 's', the second letter ('s') by 'h', and so on, so the resulting encoded message is "shizxvzsg".
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
        string s;
        cin >> n >> s;
        if (n == 2)
        {
            swap(s[0], s[1]);
        }
        else if (n % 2 != 0)
        {
            for (int i = 0; i < n - 2; i++)
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }

        int a = 97, b = 122;
        for (int i = 0; i < n; i++)
        {
            int val = int(s[i]); // find ASCII value of the character
            int dif = val - a;
            int exchange = b - dif;
            s[i] = static_cast<char>(exchange);
            cout << s[i];
        }
        cout << endl;
    }
}