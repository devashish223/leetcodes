class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int cost = 0;
        for (int i=0;i<s.length();i++){
            if(s[i]=='0'){
                cost++;
            }
        }
        int min_cost = cost;
        for (int i=0;i<s.length();i++){
            if(s[i]=='0'){
                cost--;
            }
            else{
                cost++;
            }
            
            min_cost = min(cost,min_cost);
        }
        
        return min_cost;
        
    }
};