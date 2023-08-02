#include<iostream>
#include<vector>
using namespace std;

vector<int> repeated(vector<int>& nums) {
    int n = nums.size();
    int B[n+1];
    for(int i=0;i<=n;i++) B[i]=0;
    int a=0,b=0;
    for(int i=0;i<n;i++) {
        B[nums[i]]++;
    }
    for(int i=0;i<=n;i++) {
        if(B[i] == 0) b=i;
        if(B[i] == 2) a=i;
    }
    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}

int main() {
    vector<int> nums = {3,1,2,5,3};
    vector<int> ans = repeated(nums);
    for(auto x:ans) {
        cout << x << " ";
    }
}