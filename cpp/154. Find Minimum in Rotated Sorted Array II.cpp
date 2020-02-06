class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while(l < r){
            int mid = l + (r - l) / 2;
            if(nums[l] < nums[r]){
                return nums[l];
            }
            else if(nums[l] > nums[r]){
                if(nums[l] <= nums[mid]){
                    l = mid + 1;
                }
                else if(nums[mid] <= nums[r]){
                    r = mid;
                }
            }
            else ++l;
        }
        return nums[l];
    }
};