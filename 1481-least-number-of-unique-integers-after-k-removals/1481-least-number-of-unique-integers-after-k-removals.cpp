class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mpp;
        for(auto num: arr) mpp[num]++;
        sort(arr.begin(),arr.end(),[&mpp](const auto &a,const auto &b){
            if(mpp[a]==mpp[b]) return a>b;
            return mpp[a]>mpp[b];
        });
        while(k){
            arr.pop_back(); --k;
        }
        unordered_set<int> st(arr.begin(),arr.end());
        return st.size();
    }
};