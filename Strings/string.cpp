#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "RF Group";
    string str2 = "RF Technologies";
    string str3 = str1 + " " + str2; //concation
    //cout<<(str1 == str2)<<endl;
    cout<< str3<<endl;

    string str4;
    cin>> str4;
    cout<<  str4<<endl;

    string str5;
    getline(cin,str5);
    cout<<str5<<endl;
}