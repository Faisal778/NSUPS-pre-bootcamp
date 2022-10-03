/* Write a program that will remove all duplicates from a sequence of integers and print the list of unique
integers occuring in the input sequence, along with the number of occurences of each.
Input
The input file will contain a sequence of integers (positive, negative, and/or zero). The input file may
be arbitrarily long.
Output
The output for this program will be a sequence of ordered pairs, separated by newlines. The first
element of the pair must be an integer from the input file. The second element must be the number
of times that that particular integer appeared in the input file. The elements in each pair are to be
separated by space characters. The integers are to appear in the order in which they were contained
in the input file.
Sample Input
3 1 2 2 1 3 5 3 3 2
Sample Output
3 4
1 2
2 3
5 1


*/
#include<iostream>
#include<unordered_map>
#include <iterator>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector <int> v, k;
    vector<int> :: iterator it;
    vector<int> :: iterator i, j;
    int n;
    while(cin >> n)
    {
        v.push_back(n);
    }

    //v is original vector

    for (it = v.begin(); it != v.end(); it++)
    {
        int count=0, num;
        num = *it;
        for( i = v.begin(); i!=v.end(); i++)
        {
            if (num==*i)
            {
                count++;


            }


        }

// if the value is already in k then skip. if not than push value in k vector
        j= find(k.begin(), k.end(), num);
        if (j != k.end())
        {
            continue;
        }
        else

        {
             k.push_back(num);
             cout<<num<<" "<<count<<endl;
        }

    }

    return 0;

}




