#include <iostream>
using namespace std;

//leetcode problem 50

double myPow(double x, int n) {
        long binForm = n;
        if(n < 0){
            x = 1/x;
            binForm = -binForm;
        }

        double ans =1;

        while(binForm > 0){
            if(binForm %2 ==1){
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }
        return ans;
    }

int main(){
    double x = 4;
    int n = 4;

    double result = myPow(x, n);
    cout << result << endl;
}