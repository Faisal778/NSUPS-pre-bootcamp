#include<iostream>
#include<vector>
using namespace std;

void arabicFullForm() {
//    string input;
//    int count=0;
//    while(input != "*") {
//        int array[count];
//        cin >> input;
//        if (input=="Hajj") {
//            array[count]=0;
//        } else if (input=="Umrah") {
//            array[count]=1;
//        }
//
//        count++;
//
//
//    }
//
//
//
//    array[count];
//    for (int i =0; i<count-1; i++) {
//        if (array[i]==0) {
//            cout<< "Hajj-e-Akbar"<<endl;
//        } else {
//            cout<<"Hajj-e-Asghar"<<endl;
//        }
//    }
//}
/*int count = 0;

for (int i =0 ; ; i++)
{
     int array[count];
    cin >> input;
    if (input == "*"){


            for (int j=0; j<i; j++)
{
    if (array[j]==0) {
            cout<< "Hajj-e-Akbar"<<endl;
        } else {
            cout<<"Hajj-e-Asghar"<<endl;
        }
}


        break;
    }
    else
    {

        if (input=="Hajj") {
            array[i]=0;
        } else{
            array[i]=1;
        }
    }
    count++;



} */
vector <int> list;
string input;

    while(input != "*")
    {
        cin >> input;
        if (input == "Hajj")
        {
            list.push_back(0);
        }if(input == "Umrah")
        {
            list.push_back(1);
        }
    }

   int i = 0;
   while(i != list.size()){
    if (list[i]==0){
        cout<<"Case "<<i+1<<": Hajj-e-Akbar"<<endl;
    }else if(list[i]==1){
        cout<<"Case "<<i+1<<": Hajj-e-Asghar"<<endl;
    }
    i++;
   }




}

int main() {
    arabicFullForm();
}
