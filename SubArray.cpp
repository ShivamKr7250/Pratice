#include <iostream>
using namespace std;

int main(){
    int arr[6] = {2,5,8,9,5,1};
    int size = sizeof(arr)/sizeof(int);

    for(int st = 0; st <size; st++){
        for(int end = st; end < size; end++){
            for(int i = st; i <= end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}