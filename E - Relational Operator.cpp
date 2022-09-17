#include <iostream>
using namespace std;

void rationalOperation() {
    int input, first_num, second_num;
    cin >> input;

    for (int i = 0; i<input; i++) {
        cin >>first_num>>second_num;
        if (first_num>second_num) {
            cout<<">"<<endl;
        } else if (second_num>first_num) {
            cout<<"<"<<endl;
        } else
            cout<<"="<<endl;
    }
}

int main() {
    rationalOperation();
}
