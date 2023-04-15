class Solution {
public:
    int minOperations(int n) {
        int i = 0,res =  0;
        while(i<n){
            res+=abs((n -( 2*i + 1)));
            i++;
        }
        
        return res/2;
    }
};