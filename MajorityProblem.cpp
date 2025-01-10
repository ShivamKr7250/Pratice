#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int brutForce(vector<int> arr){
    for(int el: arr){
        int freq =0;
        for(int val : arr){
            if(val == el){
                freq++;
            }
        }
        if(freq > arr.size()/2){
            return el;
        }
    }
    return -1;
}

int optimizeApproach(vector<int> arr){
    int n = arr.size();

    //sort
    sort(arr.begin(), arr.end());
    //freq cout
    int freq = 1, ans = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] == arr[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = arr[i];
        }

        if(freq > n/2){
            return ans;
        }
    } 
    return ans;
}

//Moore's Voting Algorithm

int mooreVoting(vector<int> arr){
    int n = arr.size();
    int freq =0, ans =0;

    for(int i =0; i<n; i++){
        if(freq == 0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {1,2,2,1,1};
    int result1 = brutForce(nums);
    int result2 = optimizeApproach(nums);
    int result3 = mooreVoting(nums);

    
    cout<< "The Majoruty Element is by Moore's Voting Algorithm "<<result3<<endl;
    cout<< "The Majoruty Element is by Optimize Approach "<<result2<<endl;
    cout<< "The Majoruty Element is by Brut Force Approach "<<result1;

}