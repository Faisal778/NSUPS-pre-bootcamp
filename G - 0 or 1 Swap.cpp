/* We have a sequence pp = {p_1,\ p_2,\ ...,\ p_Np
1
​
 , p
2
​
 , ..., p
N
​
 } which is a permutation of {1,\ 2,\ ...,\ N1, 2, ..., N}.

You can perform the following operation at most once: choose integers ii and jj (1 \leq i < j \leq N)(1≤i<j≤N), and swap p_ip
i
​
  and p_jp
j
​
 . Note that you can also choose not to perform it.

Print YES if you can sort pp in ascending order in this way, and NO otherwise.

Constraints
All values in input are integers.
2 \leq N \leq 502≤N≤50
pp is a permutation of {1,\ 2,\ ...,\ N1, 2, ..., N}.
Input
Input is given from Standard Input in the following format:

NN
p_1p
1
​
  p_2p
2
​
  ...... p_Np
N
​

Output
Print YES if you can sort pp in ascending order in the way stated in the problem statement, and NO otherwise.

Sample 1
Inputcopy	Outputcopy
5
5 2 3 4 1
YES
You can sort pp in ascending order by swapping p_1p
1
​
  and p_5p
5
​
 .

Sample 2
Inputcopy	Outputcopy
5
2 4 3 5 1
NO
In this case, swapping any two elements does not sort pp in ascending order.

Sample 3
Inputcopy	Outputcopy
7
1 2 3 4 5 6 7
YES
pp is already sorted in ascending order, so no operation is needed.

*/
#include<iostream>
using namespace std;
int main() {
    int n, count=0;
    cin >> n;
    int array[n];

    for (int i=0; i<n; i++) {
        cin >> array[i];
        if(array[i]!=i+1) {
            count++;
        }
    }
    if (count<=2) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}
