#include <iostream>
using namespace std;

int main(){
    char str[] ="Shivam Kumar";
    int len =0;
    for(int i =0; i<str[i] != '\0'; i++){
        len++; 
    }
    cout<< "The Length of the string is: "<< len;
}








// int main(){
//     char str[15];

//     cout<<"enter your name: "<<endl;

//     cin.getline(str, 100, '.');

//     cout<<"Your string Output is: "<<str<<endl;

//     for(char ch: str){
//         cout<<ch<<" ";
//     }
//     cout<<endl;
//     return 0;
// }