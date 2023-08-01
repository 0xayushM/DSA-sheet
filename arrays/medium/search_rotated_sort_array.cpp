#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int start=0, end = nums.size()-1;
    int mid = (start+end)/2;
    while(start<=end) {
        mid = (start+end)/2;
        if(nums[mid] == target)
            return mid;
        if(nums[start] <= nums[mid]) {
            if(nums[start] <= target && nums[mid] >= target)
                end = mid-1;
            else start = mid+1;
        } else {
            if(nums[mid] <= target && nums[end] >= target) 
                start = mid+1;
            else end = mid-1;
        }
    }
    return -1;
}
int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout << search(nums,target);
}