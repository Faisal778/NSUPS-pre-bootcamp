#include <iostream>
using namespace std;

int findMiddleValue(int array[][3], int row) {
    if (array[row][0]>array[row][1] && array[row][0]<array[row][2]) {
        return array[row][0];
    }
    if (array[row][0]<array[row][1] && array[row][0]>array[row][2]) {
        return array[row][0];
    }
    if (array[row][1]>array[row][0] && array[row][1]<array[row][2]) {
        return array[row][1];
    }
    if (array[row][1]<array[row][0] && array[row][1]>array[row][2]) {
        return array[row][1];
    }
    if (array[row][2]>array[row][1] && array[row][2]<array[row][0]) {
        return array[row][2];
    }
    if (array[row][2]<array[row][1] && array[row][2]>array[row][0]) {
        return array[row][2];
    }
    return 0;
}

void findSecondLargest() {
    int t;
    cin>>t;
    int array[t][3];

    for (int row =0; row<t; row++) {
        for (int col =0; col<3; col++) {
            cin >>array[row][col];
            if (col==2) {

                cout<<findMiddleValue(array, row)<<endl;
            }
        }
    }

}
int main() {
     findSecondLargest();
     return 0;
}
