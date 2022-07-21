#include<iostream>
#include<vector>
using namespace std;

class NumArray {
private:
    vector<int> pre_nums;

public:
    NumArray(vector<int>& nums) {
        for (int i = 1; i < nums.size();i++){
            nums[i] += nums[i - 1];
        }
        pre_nums = nums;
    }
    
    int sumRange(int left, int right) {
        if(left==0) return pre_nums[right];
        return pre_nums[right] - pre_nums[left - 1];
    }
};