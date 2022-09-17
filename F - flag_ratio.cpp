#include<iostream>
#include<iomanip>
#include<cmath>
#define PI acos(-1)
using namespace std;


//void areaOfRedAndGreen(double array[], int size)
//{
//
//    for (int i=0; i<size; i++)
//    {
//        double r =(array[i]*.2);
//        double redArea=r*r*PI;
//        cout<<setprecision(2)<<fixed<<redArea<<" ";
//        double greenArea=(array[i]*array[i]*.6) - redArea;
//        cout<<setprecision(2)<<fixed<<greenArea<<endl;
//    }
//}
//
////void areaOfGreen()
////{
////
////}


int main()
{
    int total;
    cin >>total;
    double array[total];
    for (int i =0; i<total; i++)
    {
        cin >> array[i];

       double length = array[i];
       double width = array[i]*.6;
       double redius = array[i]*.2;
       double red_area = PI*redius*redius;
       double full_area= length*width;
       double green_area = full_area-red_area;
       cout<<setprecision(2)<<fixed<<red_area<<" ";
       cout<<setprecision(2)<<fixed<<green_area<<endl;

    }

   // areaOfRedAndGreen(array,total);
   // areaOfGreen(array,total);

}
