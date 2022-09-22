/*  The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems branded with the enormous Input/Output warning. You are expected to be able to process at least 2.5MB of input data per second at runtime.

Input
The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.

Output
Write a single integer to output, denoting how many integers ti are divisible by k.

Sample 1
Inputcopy	Outputcopy
7 3
1
51
966369
7
9
999996
11
4
The integers divisible by 33 are 51, 966369, 9,51,966369,9, and 999996999996. Thus, there are 44 integers in total.

*/
#include<iostream>
using namespace std;
int main()
{
    int n , k, number, count =0;

    cin >> n>>k;
    for (int i=0; i<n; i++)
    {
        cin >> number;
        if (number % k == 0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
