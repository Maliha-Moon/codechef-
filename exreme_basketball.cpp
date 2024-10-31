/* Difficulty:853
Extreme Basketball
Alice and Bob are playing a game of basketball against each other, one-versus-one.
Currently, Alice has 
A
A points, and Bob has 
B
B points.

Each shot of a player can score either 
2
2 or 
3
3 points.

Alice isn't just out to win - she wants to win in dominant fashion.
Alice believes that her win is dominant if she ends the game with at least 
10
10 points more than Bob.

If Alice is able to prevent Bob from scoring any more points, what's the minimum number of shots she further needs to get a dominant victory?

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single line of input, containing two space-separated integers 
A
A and 
B
B — the initial scores of Alice and Bob.
Output Format
For each test case, output on a new line the minimum number of shots Alice needs to win a dominant victory.

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
A
,
B
≤
100
2≤A,B≤100
Sample 1:
Input
Output
3
11 2
100 23
3 5
1
0
4
Explanation:
Test case 
1
1: Alice can shoot a single 
2
2-pointer and move to 
13
13 points, which is 
11
11 more than Bob's score of 
2
2 - hence earning her a dominant victory.

Test case 
2
2: Alice has way more points than Bob already, so no more shots are needed.

Test case 
3
3: Alice can shoot 
4
4 three-pointers, bringing her score to 
15
15.

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
        int A, B;
        cin >> A >> B;
        int shot = 0;
        if ((A - B) >= 10)
            cout << "0" << endl;
        else
        {
            // shot = 10 - (A - B);
            // cout << (shot + 2) / 3 << endl;
            cout << (int)ceil((10 - ((double)(A) - (double)(B))) / (double)(3)) << endl; // buit-in
            // it accepts a double value as an input and returns the smallest integer value greater than or equal to the input number.
        }
    }
    return 0;
}