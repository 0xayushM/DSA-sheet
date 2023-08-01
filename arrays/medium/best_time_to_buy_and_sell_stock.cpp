#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& nums) {
    int buy = INT_MAX;
    int maxProfit = 0;
    for(int i=0;i<nums.size();i++) {
        buy = min(buy,nums[i]);
        maxProfit = max(maxProfit, nums[i]-buy);
    }
    return maxProfit;
}

int main() {
    vector<int> nums = {7,1,5,3,6,4};
    cout << maxProfit(nums);
}