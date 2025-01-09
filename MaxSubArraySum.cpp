#include <iostream>
using namespace std;

//Brut Force Approach
// int main(){
//     int arr[6] = {2,5,8,9,5,1};
//     int size = sizeof(arr)/sizeof(int);
//     int maxSum = INT_MIN;

//     for(int st = 0; st <size; st++){
//         int currSum = 0;
//         for(int end = st; end < size; end++){
//             currSum += arr[end];
//             maxSum = max(currSum, maxSum);
//         }
//     }

//     cout<<"Max Subarray Sum is "<<maxSum;
// }





    int main(){
    int arr[6] = {2,5,8,9,5,1};
    int size = sizeof(arr)/sizeof(int);

    //Kadane's Algorithm
    int currSum =0, maxSum =INT_MIN;
        for(int val: arr){
            currSum += val;
            maxSum = max(currSum, maxSum);
            if(currSum < 0)
                currSum = 0;
        }
    cout<<"Max Subarray Sum is "<<maxSum;
}