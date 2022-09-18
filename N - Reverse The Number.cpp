/* Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Sample 1
Inputcopy	Outputcopy
4
12345
31203
2123
2300
54321
30213
3212
32

*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i=0; i<n; i++) {
        cin >> array[i];
        int reverseNum = 0,remainder=0;

        while(array[i]!=0) {
            remainder =array[i]%10;
            reverseNum = reverseNum*10 + remainder;
            array[i]/=10;
        }
        cout <<reverseNum<<endl;
    }
    return 0;
}

