/* Difficulty:  1006
TCS Examination
Two friends, Dragon and Sloth, are writing a computer science examination series. There are three subjects in this series: 
DSA
DSA, 
TOC
TOC, and 
DM
DM. Each subject carries 
100
100 marks.

You know the individual scores of both Dragon and Sloth in all 
3
3 subjects. You have to determine who got a better rank.

The rank is decided as follows:

The person with a bigger total score gets a better rank
If the total scores are tied, the person who scored higher in 
DSA
DSA gets a better rank
If the total score and the 
DSA
DSA score are tied, the person who scored higher in 
TOC
TOC gets a better rank
If everything is tied, they get the same rank.
Input Format
The first line of input contains a single integer 
T
T, denoting the number of test cases. The description of 
T
T test cases follows.
The first line of each test case contains three space-separated integers denoting the scores of Dragon in 
DSA
DSA, 
TOC
TOC and 
DM
DM respectively.
The second line of each test case contains three space-separated integers denoting the scores of Sloth in 
DSA
DSA, 
TOC
TOC and 
DM
DM respectively.
Output Format
For each test case, if Dragon got a better rank then output "Dragon", else if Sloth got a better rank then output "Sloth". If there was a tie then output "Tie". Note that the string you output should not contain quotes.
The output is case insensitive. For example, If the output is "Tie" then "TiE", "tiE", "tie", etc are also considered correct.
Constraints
1
≤
T
≤
1000
1≤T≤1000
Each score of both Dragon and Sloth lies between 
0
0 and 
100
100.
Subtasks
Subtask #1 (100 points): Original constraints

Sample 1:
Input
Output
4
10 20 30
30 20 10
5 23 87
5 23 87
0 15 100
100 5 5
50 50 50
50 49 51
SLOTH
TIE
DRAGON
DRAGON
Explanation:
For the first test case, Sloth and Dragon have the same total score but Sloth gets a better rank because he has a higher score in 
DSA
DSA.
For the second test case, Sloth and Dragon have the same rank because they have the same score among all subjects.
For the third test case, Dragon gets a better rank because he has a greater total score.
For the fourth test case, Sloth and Dragon have the same total score and same 
DSA
DSA score. Dragon gets a better rank because he has a greater 
TOC
TOC score.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d[3], sum_d = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> d[i];
            sum_d += d[i];
        }
        int s[3], sum_s = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> s[i];
            sum_s += s[i];
        }

        if (sum_s != sum_d)
            cout << ((sum_s > sum_d) ? "SLOTH" : "DRAGON") << endl;

        else
        {
            vector<pair<int, int>> score;
            for (int i = 0; i < 3; i++)
            {
                score.push_back({d[i], s[i]});
            }

            if (score[0].first != score[0].second)
                cout << ((score[0].first > score[0].second) ? "DRAGON" : "SLOTH") << endl;

            else if (score[1].first != score[1].second)
                cout << ((score[1].first > score[1].second) ? "DRAGON" : "SLOTH") << endl;

            else if (score[2].first != score[2].second)
            {
                cout << ((score[2].first > score[2].second) ? "DRAGON" : "SLOTH") << endl;
            }

            else
            {
                cout << "TIE" << endl;
            }
        }
    }

    return 0;
}