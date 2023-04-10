class Solution {
public:
    bool search(vector<int>& nums, int target) {
        set <int>s;
        for(auto i:nums){
            s.insert(i);
        }
        
        for(auto i:s){
            if(i==target){
                return true;
            }
        }
        
        return false;
    }
};