/*
Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

Input Format
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

Output Format
Display the GCD and LCM of A and B separated by space respectively. The answer for each test case must be displayed in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B ≤ 1000000

Sample 1
Inputcopy	Outputcopy
3
120 140
10213 312
10 30
20 840
1 3186456
10 30

*/

//#include<iostream>
//using namespace std;
//
//int find_gcd(int num1, int num2) {
//    int lowest, gcd = 0;
//    if (num1<num2) {
//        lowest = num1;
//    } else {
//        lowest = num2;
//    }
//
//    for (int i =1; i<=lowest; i++) {
//        if (num1%i==0 && num2%i == 0) {
//            gcd = i;
//        }
//    }
//    return gcd;
//}
//
////int find_lcm(int num1, int num2) {
////    int highest, lcm = 1;
////    if (num1>num2) {
////        highest = num1;
////    } else {
////        highest = num2;
////    }
////
////    for (int i =1; i<=highest; i++) {
////        if (highest%num1 == 0 && highest %num2 == 0) {
////            return highest;
////        } else {
////            int temp = num1*num2;
////            for (int j = num1; j<=temp; j++) {
////                if (j%num1 == 0 && j%num2 == 0) {
////                    return j;
////                }
////                if (j==temp-1) {
////                    return temp;
////                }
////            }
////        }
////    }
////
////
////
////    return 0;
////}
//
//
//int main() {
//    int n, num1, num2;
//    cin>>n;
//    for(int i=0; i<n; i++) {
//        cin >> num1 >>num2;
//        int gcd = find_gcd(num1, num2);
//        cout<<gcd <<" ";
//        int lcm = num1*num2 / gcd;
//        cout<<lcm <<endl;
//    }
//    return 0;




#include<iostream>
using namespace std;

int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}
int main()
{
    long long n, num1, num2, gcd1, lcm1;

    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin >> num1 >> num2 ;

        gcd1 = gcd(num1, num2);
        lcm1 = (num1*num2)/gcd1;
        cout<<gcd1<<" "<<lcm1<<endl;
    }
}

