class Solution {
public:
vector<int> nextGreaterElement(vector<int>& nums2) {
        vector<int>ans;
        vector<int>result(nums2.size());
        stack<int>st;
        for(int i = nums2.size()-1; i>=0; i--){
            if(st.empty()){
                result[i]=-1;
            }
            else if(st.top()>nums2[i]){
                result[i]=st.top();

            }
            else{
                while(!st.empty() && st.top()<=nums2[i]){
                    st.pop();
                }
                if(st.empty()){
                    result[i]=-1;
                }
                else{
                    result[i]=st.top();
                }
            }
            st.push(nums2[i]);
        }
        for(int i = 0; i<nums2.size()/2; i++){
            ans.push_back(result[i]);
        }
        return ans;
    }
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        for(auto i = 0; i<n; i++){
            nums.push_back(nums[i]);
        }
        return nextGreaterElement(nums);
    }
};