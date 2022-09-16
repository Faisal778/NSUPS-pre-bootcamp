#include<iostream>
using namespace std;

int checkDifferentNumber(int array[], int size) {
    int evenCount = 0, oddCount=0, i, index=1;
    int evenArray[99], oddArray[99];
    for (i = 0; i<size; i++) {
        cin >> array[i];
        if (array[i]%2==0) {
            evenArray[i]==i;
            evenCount++;
            evenArray[0]=i;

        } else {
            oddArray[i]=i;
            oddCount++;
            oddArray[0]=i;

        }
        if (i == size-1) {
            if (oddCount==1) {
                return oddArray[0]+1;
            } else {
                return evenArray[0]+1;
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    int array[n];
    cout<<checkDifferentNumber(array,n);
}
