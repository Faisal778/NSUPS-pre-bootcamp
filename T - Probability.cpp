
/* Chef has recently started attending probability class. For the first three lectures he had no homework but for the fourth lecture he had one to do. The problem was given as range [A,B] over positive integers, chef has to find the probability of a number chosen at random within the range (including A and B) such that it will contain at least one zero.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
Each line of the test case contains two space separated integers A and B denoting the range extremities.
Output
For each test case, output a single line containing the probability in fraction and NOT in decimal.
Constraints
1 ≤ T ≤ 10
0 ≤ A ≤ 105
0 ≤ B ≤ 106


Example
Input:
2
1 20
100 999

Output:
2/20
171/900
Explanation
Example case 1.The range given is 1 to 20. So look at all the integers from 1 to 20, inclusive, we find that 10 and 20 are the only two numbers that have a zero in them. And hence the probability to find them is 2/20.
*/#include<iostream>
using namespace std;

int zero_counter(int num)
{
    if (num == 0)
    {
        return 1;
    }
    while(num)
    {
        if (num % 10 == 0)
        {
            return 1;
        }
         num = num /10;
    }
    return 0;
}
int main()
{
    int n, a , b, count = 0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a>>b;
        count = 0;

        for (int j =a; j<=b; j++)
        {
            int counter = zero_counter(j);
            if (counter==1){
                count++;
            }
        }
        cout<< count<<"/"<<(b-a+1)<<endl;
    }
}
