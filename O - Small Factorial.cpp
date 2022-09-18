/* Write a program to find the factorial value of any number entered by the user.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains an integer N.

Output
For each test case, display the factorial of the given number N in a new line.

Constraints
1 ≤ T ≤ 1000
0 ≤ N ≤ 20
Example
Input
3
3
4
5

Output

6
24
120
*/
#include <iostream>
using namespace std;

int factorial(int number)
{
    if(number>1)
    {
        return number*factorial(number-1);
    }else
        return 1;
}
int main()
{
    int n;
    cin >>n;
    int array[n];
    for (int i =0; i<n; i++)
    {
        cin >> array[i];
        cout<< factorial(array[i])<<endl;


    }
}
