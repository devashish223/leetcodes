class Solution {
public:
    int findMin(vector<int>& nums) {
        int m = 100000000;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<m){
                m = nums[i];
            }
        }
        return m;
    }
};