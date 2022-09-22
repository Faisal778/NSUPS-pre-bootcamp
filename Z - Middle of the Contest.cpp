/* Polycarp is going to participate in the contest. It starts at h_1:m_1h
1
​
 :m
1
​
  and ends at h_2:m_2h
2
​
 :m
2
​
 . It is guaranteed that the contest lasts an even number of minutes (i.e. m_1 \% 2 = m_2 \% 2m
1
​
 %2=m
2
​
 %2, where x \% yx%y is xx modulo yy). It is also guaranteed that the entire contest is held during a single day. And finally it is guaranteed that the contest lasts at least two minutes.

Polycarp wants to know the time of the midpoint of the contest. For example, if the contest lasts from 10:0010:00 to 11:0011:00 then the answer is 10:3010:30, if the contest lasts from 11:1011:10 to 11:1211:12 then the answer is 11:1111:11.

Input
The first line of the input contains two integers h_1h
1
​
  and m_1m
1
​
  in the format hh:mm.

The second line of the input contains two integers h_2h
2
​
  and m_2m
2
​
  in the same format (hh:mm).

It is guaranteed that 0 \le h_1, h_2 \le 230≤h
1
​
 ,h
2
​
 ≤23 and 0 \le m_1, m_2 \le 590≤m
1
​
 ,m
2
​
 ≤59.

It is guaranteed that the contest lasts an even number of minutes (i.e. m_1 \% 2 = m_2 \% 2m
1
​
 %2=m
2
​
 %2, where x \% yx%y is xx modulo yy). It is also guaranteed that the entire contest is held during a single day. And finally it is guaranteed that the contest lasts at least two minutes.

Output
Print two integers h_3h
3
​
  and m_3m
3
​
  (0 \le h_3 \le 23, 0 \le m_3 \le 590≤h
3
​
 ≤23,0≤m
3
​
 ≤59) corresponding to the midpoint of the contest in the format hh:mm. Print each number as exactly two digits (prepend a number with leading zero if needed), separate them with ':'.

Sample 1
Inputcopy	Outputcopy
10:00
11:00
10:30
Sample 2
Inputcopy	Outputcopy
11:10
11:12
11:11
Sample 3
Inputcopy	Outputcopy
01:02
03:02
02:02


*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int h1, m1, h2, m2;
    char ch;
    cin >> h1>> ch >> m1;
    cin >> h2 >> ch >> m2;

    int start_time = h1*60+m1;
    int end_time = h2*60+m2;
    int mid_hour = (start_time+end_time)/(60*2);
    int mid_min = (h1*60+m1)+(h2*60+m2)-((mid_hour)*60*2);


    // To full empty space in front of answer with 0
    cout.fill('0');
    cout<<setw(2)<<mid_hour<<ch<<setw(2)<<mid_min/2<<endl;
    return 0;
}
