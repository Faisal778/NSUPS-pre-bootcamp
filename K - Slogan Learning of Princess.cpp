/* Prince Macaw is flying here and there and searching for food. Her Princess is waiting for him at home.
But he stopped when he was flying near Shahbag. He saw millions of people gathered there for only one
demand- death sentence of war crimes. They were giving slogans. If you are not familiar with slogans
let me tell you, slogan has two parts. One part of the slogan is yelled by the leader and the rest part
is chorused from the mass people. For example, when the leader says — “tomar amar thikana” then
other say “padma meghna jomuna”. Some of the slogans are listed belowFirst Line Second Line
ko te kader molla tui rajakar tui rajakar
tumi ke ami ke garo chakma bangali
Prince also joined with this mass people. When it was too late, Princess got worried about Prince.
So she also went out. After some while, she found Prince on a tree at Shahbag yelling slogans in strong
voice. Instead of getting mad, Princess asked Prince what are the slogans. So Prince told her a few
slogans, first line and corresponding second line. So Princess got prepared. Given the list of the slogans
and also the first lines Princess going to hear, print out the second line of the slogans.
Input
First line contains number of slogans, N (0 < N ≤ 20) Prince is going to teach Princess. Hence follows
N pairs of lines. First line of the pair contains first line of a slogan and the second line of the pair
is corresponding second line of the slogan. Then another positive integer Q will be given (Q ≤ 100).
Hence follows Q lines. Each line contains first line of a slogan. You may assume that the slogans will
contain lower case English alphabet and/or space. Both the lines of slogan will contain at least one
alphabet. No two first lines in the Princes slogan list will be same. Each slogan will be at most 100
characters long. All of the query first line will be in Princes list.
Output
For each of the first line of the slogan, you need to print out corresponding second line.
Sample Input
3
ko te kader molla
tui rajakar tui rajakar
tumi ke ami ke
garo chakma bangali
jalo re jalo
agun jalo
2
jalo re jalo
ko te kader molla
Sample Output
agun jalo
tui rajakar tui rajakar
*/
#include<iostream>
#include<map>
#include<string>
#include<iterator>
#include <iomanip>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main() {

    map<string,string> m;
    map<string, string> :: iterator it;
    int n, k;
    cin>> n;

    string string1, string2, string3;
    getline(cin,string3);
    for (int i = 0; i<n; i++) {
        getline(cin,string1);
        getline(cin,string2);
        m.insert(make_pair(string1, string2));
    }

    cin >> k;
    getline(cin,string3);

    while(k--) {

        getline(cin,string3);
        map<string, string> :: iterator itr = m.find(string3);
        if (itr!=m.end()) {
            cout<<m[string3]<<endl;
        }

    }

    return 0;


}
