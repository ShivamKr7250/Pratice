#include <iostream>
#include <vector>
using namespace std;

//Brut Force Approach

// vector<int> pairSum(vector<int> arr, int target){
//     vector<int> result;
//     for(int i=0; i< arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[i] + arr[j] == target){
//                 result.push_back(arr[i]);
//                 result.push_back(arr[j]);
//                 return result;
//             }
//         }
//     }
//     return result;
// }


//Optimal Approach

vector<int> pairSum(vector<int> arr, int target){
    vector<int> result;
    int start =0;
    int end = arr.size() -1;

    while (start<end)
    {
        if(arr[start] +arr[end] == target){
            result.push_back(arr[start]);
            result.push_back(arr[end]);
            return result;
        }
        else if(arr[start] + arr[end] < target){
            start++;
        }
        else{
            end--;
        }
    }
    return result;
    
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> ans = pairSum(nums, target);

    cout<<ans[0] <<","<<ans[1]<<endl;
    return 0;
}