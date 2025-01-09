#include <iostream>
#include <vector>
using namespace std;

// It is Binary search Program and its times complexity is O(log n)

int binarySearch(vector<int>& arr, int target){
    int start = 0;
    int end = arr.size()-1;

    while (start <= end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return -1;
    
}

int main(){
    vector<int> arr = {2,4,6,8,10,12,14};
    int target = 12;

    int result = binarySearch(arr, target);
    if(result != -1){
        cout<< "Target found at index "<< result<< " with value "<< arr[result]<<endl;
    }else{
        cout<<"Target not found"<<endl;
    }

    return 0;
}