/* Read problems statements in Mandarin Chinese and Russian.
You are given a sequence a1, a2, ..., aN. Find the smallest possible value of ai + aj, where 1 ≤ i < j ≤ N.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.

The first line of each description consists of a single integer N.

The second line of each description contains N space separated integers - a1, a2, ..., aN respectively.

Output
For each test case, output a single line containing a single integer - the smallest possible sum for the corresponding test case.

Constraints
T = 105, N = 2 : 13 points.
T = 105, 2 ≤ N ≤ 10 : 16 points.
T = 1000, 2 ≤ N ≤ 100 : 31 points.
T = 10, 2 ≤ N ≤ 105 : 40 points.
1 ≤ ai ≤ 106
Sample 1
Inputcopy	Outputcopy
1
4
5 1 3 4
4
Here we pick a2 and a3. Their sum equals to 1 + 3 = 4.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int  test_case, n, input;

    cin >> test_case;
    for (int i =0; i< test_case; i++)
    {
        cin>>n;
        vector<int> v;
        for (int j=0; j<n; j++)
        {
            cin>>input;
            v.push_back(input);
        }
        //sort is in algorithm headar
        sort(v.begin(), v.end());

        cout<<v.at(0)+v.at(1)<<endl;

    }
    return 0;

}
