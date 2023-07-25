#include<iostream>
#include<vector>
using namespace std;

int maxSubarray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int sum=0;
    for(auto it:nums) {
        sum+=it;
        maxSum = max(maxSum,sum);
        if(sum < 0) sum=0;
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubarray(nums);
}