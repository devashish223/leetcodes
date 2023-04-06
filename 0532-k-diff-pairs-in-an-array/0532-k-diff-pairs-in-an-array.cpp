class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        //int i = 0;j = i+1;
        int count = 0;
        int i = 0,j =1 ;
        while(i<nums.size()&&j<nums.size()){
            //int j = i+1;
            if(nums[j] - nums[i] == k){
                count++;
                i++;
                j++;
                while(j<nums.size() && nums[j]==nums[j-1]){
                    j++;
                }
            }
            else if(nums[j] - nums[i] < k){
                j++;
            }
            else{
            i++;
                if(j == i){
                    j++;
                }
            }
        }
        return count;
    }
};